// File: Window.cpp
// Author: Stanley Taveras
// Created: 2/21/2010
// Modified: 2/21/2010

#include "Window.h"

// void Window::_setup(void) {


// }

Window::Window(void):
	m_bHasQuit(false),
	m_nWidth(640),
	m_nHeight(480),
#ifdef _WIN32
	m_hWnd(NULL),
	m_hDC(NULL),
	m_hInstance(NULL),
	m_lpCmdLine(NULL),
#else
	_window(NULL),
#endif
	m_szWindowTitle(""),
	m_szWindowClassName("")
{}

Window::Window(int nWidth, int nHeight, const char* szWindowTitle, const char* szWindowClassName):
	m_bHasQuit(false),
	m_nWidth(nWidth),
	m_nHeight(nHeight),
#ifdef _WIN32
	m_hWnd(NULL),
	m_hDC(NULL),
	m_hInstance(NULL),
	m_lpCmdLine(NULL),
#else
	_window(NULL),
#endif
	m_szWindowTitle(szWindowTitle),
	m_szWindowClassName(szWindowClassName)
{}

void Window::_resize(void)
{
#ifdef _WIN32
	RECT rcClient, rcWindow;
	POINT diff;

	// get the size of the current client area
	GetClientRect(m_hWnd, &rcClient);

	// get the size of the containing window
	GetWindowRect(m_hWnd, &rcWindow);

	// determine the difference between the two
	diff.x = (rcWindow.right - rcWindow.left) - rcClient.right;
	diff.y = (rcWindow.bottom - rcWindow.top) - rcClient.bottom;

	// resize the client area
	MoveWindow(m_hWnd,rcWindow.left, rcWindow.top, m_nWidth + diff.x, m_nHeight + diff.y, TRUE);
#endif
}

#ifdef _WIN32
LRESULT WINAPI Window::MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch( msg )
	{
	case WM_CLOSE:
	case WM_DESTROY:
		PostQuitMessage( 0 );
		return 0;
	case WM_GETMINMAXINFO:
	case WM_SIZING:
		return 0;
	}

	return DefWindowProc( hWnd, msg, wParam, lParam );
}
#endif

#ifdef _WIN32
void Window::Initialize(HINSTANCE hInstance, LPSTR lpCmdLine)
{
	m_hInstance = hInstance;
	m_lpCmdLine = lpCmdLine;

	WNDCLASSEX wcex = 
	{
		sizeof(WNDCLASSEX), CS_CLASSDC, this->MsgProc, 0L, 0L, 
		hInstance, NULL, NULL, NULL, NULL, 
		m_szWindowClassName, NULL
	};

	RegisterClassEx(&wcex);
	m_hWnd = CreateWindowEx(WS_EX_APPWINDOW, m_szWindowClassName, m_szWindowTitle, WS_SYSMENU, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);	
	_resize();

	ShowWindow(m_hWnd, SW_SHOWDEFAULT);
#else
void Window::Initialize(void) {
	
    /* Initialize the library */
    if (!glfwInit())
        return; // -1
		
	/* Create a windowed mode window and its OpenGL context */
    _window = glfwCreateWindow(m_nWidth, m_nHeight, m_szWindowTitle, NULL, NULL);
    if (!_window)
    {
        glfwTerminate();
        return; // -1
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(_window);
#endif
}

void Window::Update(void)
{
#ifdef _WIN32
	MSG msg;
	if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
	{
		if(msg.message == WM_QUIT)
			m_bHasQuit = true;

		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
#else
	if (_window) {
		/* Loop until the user closes the window */
		m_bHasQuit = glfwWindowShouldClose(_window);

		/* Poll for and process events */
		glfwPollEvents();
	}
	/* Render here */
	// glClear(GL_COLOR_BUFFER_BIT);

	/* Swap front and back buffers */
	//glfwSwapBuffers(window);
#endif
}

void Window::Shutdown(void)
{
#ifdef _WIN32
    DestroyWindow(m_hWnd);
	UnregisterClass(m_szWindowClassName, m_hInstance);
#else
    glfwTerminate();
#endif
}