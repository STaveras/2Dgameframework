#pragma once
// TODO: Overhaul
#ifdef _WIN32
#include "KEYBOARD_KEYS_DI.h"
#else
#include <GLFW/glfw3.h>
enum KEYBOARD_KEYS
{
	KBK_ESCAPE = GLFW_KEY_ESCAPE,
	KBK_1 = GLFW_KEY_1,
	KBK_2 = GLFW_KEY_2,
	KBK_3 = GLFW_KEY_3,
	KBK_4 = GLFW_KEY_4,
	KBK_5 = GLFW_KEY_5,
	KBK_6 = GLFW_KEY_6,
	KBK_7 = GLFW_KEY_7,
	KBK_8 = GLFW_KEY_8,
	KBK_9 = GLFW_KEY_9,
	KBK_0 = GLFW_KEY_0,
	KBK_MINUS = GLFW_KEY_MINUS,
	KBK_EQUALS = GLFW_KEY_EQUAL,
	KBK_BACK = GLFW_KEY_BACKSPACE,
	KBK_TAB = GLFW_KEY_TAB,
	KBK_Q = GLFW_KEY_Q,
	KBK_W = GLFW_KEY_W,
	KBK_E = GLFW_KEY_E,
	KBK_R = GLFW_KEY_R,
	KBK_T = GLFW_KEY_T,
	KBK_Y = GLFW_KEY_Y,
	KBK_U = GLFW_KEY_U,
	KBK_I = GLFW_KEY_I,
	KBK_O = GLFW_KEY_O,
	KBK_P = GLFW_KEY_P,
	KBK_LBRACKET = GLFW_KEY_LEFT_BRACKET,
	KBK_RBRACKET = GLFW_KEY_RIGHT_BRACKET,
	KBK_RETURN = GLFW_KEY_ENTER,
	KBK_LCONTROL = GLFW_KEY_LEFT_CONTROL,
	KBK_A = GLFW_KEY_A,
	KBK_S = GLFW_KEY_S,
	KBK_D = GLFW_KEY_D,
	KBK_F = GLFW_KEY_F,
	KBK_G = GLFW_KEY_G,
	KBK_H = GLFW_KEY_H,
	KBK_J = GLFW_KEY_J,
	KBK_K = GLFW_KEY_K,
	KBK_L = GLFW_KEY_L,
	KBK_SEMICOLON = GLFW_KEY_SEMICOLON,
	KBK_APOSTROPHE = GLFW_KEY_APOSTROPHE,
	KBK_GRAVE = GLFW_KEY_GRAVE_ACCENT,
	KBK_LSHIFT = GLFW_KEY_LEFT_SHIFT,
	KBK_BACKSLASH = GLFW_KEY_BACKSLASH,
	KBK_Z = GLFW_KEY_Z,
	KBK_X = GLFW_KEY_X,
	KBK_C = GLFW_KEY_C,
	KBK_V = GLFW_KEY_V,
	KBK_B = GLFW_KEY_B,
	KBK_N = GLFW_KEY_N,
	KBK_M = GLFW_KEY_M,
	KBK_COMMA = GLFW_KEY_COMMA,
	KBK_PERIOD = GLFW_KEY_PERIOD,
	KBK_SLASH = GLFW_KEY_SLASH,
	KBK_RSHIFT = GLFW_KEY_RIGHT_SHIFT,
	KBK_MULTIPLY = GLFW_KEY_KP_MULTIPLY,
	KBK_LMENU = GLFW_KEY_LEFT_ALT,
	KBK_SPACE = GLFW_KEY_SPACE,
	KBK_CAPITAL = GLFW_KEY_CAPS_LOCK,
	KBK_F1 = GLFW_KEY_F1,
	KBK_F2 = GLFW_KEY_F2,
	KBK_F3 = GLFW_KEY_F3,
	KBK_F4 = GLFW_KEY_F4,
	KBK_F5 = GLFW_KEY_F5,
	KBK_F6 = GLFW_KEY_F6,
	KBK_F7 = GLFW_KEY_F7,
	KBK_F8 = GLFW_KEY_F8,
	KBK_F9 = GLFW_KEY_F9,
	KBK_F10 = GLFW_KEY_F10,
	KBK_NUMLOCK = GLFW_KEY_NUM_LOCK,
	KBK_SCROLL = GLFW_KEY_SCROLL_LOCK,
	KBK_NUMPAD0 = GLFW_KEY_KP_0,
	KBK_NUMPAD1 = GLFW_KEY_KP_1,
	KBK_NUMPAD2 = GLFW_KEY_KP_2,
	KBK_NUMPAD3 = GLFW_KEY_KP_3,
	KBK_NUMPAD4 = GLFW_KEY_KP_4,
	KBK_NUMPAD5 = GLFW_KEY_KP_5,
	KBK_NUMPAD6 = GLFW_KEY_KP_6,
	KBK_NUMPAD7 = GLFW_KEY_KP_7,
	KBK_NUMPAD8 = GLFW_KEY_KP_8,
	KBK_NUMPAD9 = GLFW_KEY_KP_9,
	KBK_SUBTRACT = GLFW_KEY_KP_SUBTRACT,
	KBK_ADD = GLFW_KEY_KP_ADD,
	KBK_DECIMAL = GLFW_KEY_KP_DECIMAL,
	KBK_OEM_102 = GLFW_KEY_UNKNOWN,
	KBK_F11 = GLFW_KEY_F11,
	KBK_F12 = GLFW_KEY_F12,
	KBK_F13 = GLFW_KEY_F13,
	KBK_F14 = GLFW_KEY_F14,
	KBK_F15 = GLFW_KEY_F15,
	KBK_NUMPADEQUALS = GLFW_KEY_KP_EQUAL,
	KBK_NUMPADENTER = GLFW_KEY_KP_ENTER,
	KBK_RCONTROL = GLFW_KEY_RIGHT_CONTROL,
	KBK_NUMPADCOMMA = GLFW_KEY_KP_DECIMAL,
	KBK_DIVIDE = GLFW_KEY_KP_DIVIDE,
	KBK_RMENU = GLFW_KEY_RIGHT_ALT,
	KBK_PAUSE = GLFW_KEY_PAUSE,
	KBK_HOME = GLFW_KEY_HOME,
	KBK_UP = GLFW_KEY_UP,
	KBK_PRIOR = GLFW_KEY_UNKNOWN,
	KBK_LEFT = GLFW_KEY_LEFT,
	KBK_RIGHT = GLFW_KEY_RIGHT,
	KBK_END = GLFW_KEY_END,
	KBK_DOWN = GLFW_KEY_DOWN,
	KBK_NEXT = GLFW_KEY_UNKNOWN,
	KBK_INSERT = GLFW_KEY_INSERT,
	KBK_DELETE = GLFW_KEY_DELETE,
	#if _WIN32
	KBK_LWIN = GLFW_KEY_LEFT_SUPER,
	KBK_RWIN = GLFW_KEY_RIGHT_SUPER,
	#elif __APPLE__
	KBK_LCOMMAND= GLFW_KEY_LEFT_SUPER,
	KBK_RCOMMAND = GLFW_KEY_RIGHT_SUPER,
	#else
	KBK_LSUPER = GLFW_KEY_LEFT_SUPER,
	KBK_RSUPER = GLFW_KEY_RIGHT_SUPER,
	#endif
	KBK_KANA = GLFW_KEY_UNKNOWN,
	KBK_ABNT_C1 = GLFW_KEY_UNKNOWN,
	KBK_CONVERT = GLFW_KEY_UNKNOWN,
	KBK_NOCONVERT = GLFW_KEY_UNKNOWN,
	KBK_YEN = GLFW_KEY_UNKNOWN,
	KBK_ABNT_C2 = GLFW_KEY_UNKNOWN,
	KBK_PREVTRACK = GLFW_KEY_UNKNOWN,
	KBK_AT = GLFW_KEY_UNKNOWN,
	KBK_COLON = GLFW_KEY_UNKNOWN,
	KBK_UNDERLINE = GLFW_KEY_UNKNOWN,
	KBK_KANJI = GLFW_KEY_UNKNOWN,
	KBK_STOP = GLFW_KEY_UNKNOWN,
	KBK_AX = GLFW_KEY_UNKNOWN,
	KBK_UNLABELED = GLFW_KEY_UNKNOWN,
	KBK_NEXTTRACK = GLFW_KEY_UNKNOWN,
	KBK_MUTE = GLFW_KEY_UNKNOWN,
	KBK_CALCULATOR = GLFW_KEY_UNKNOWN,
	KBK_PLAYPAUSE = GLFW_KEY_UNKNOWN,
	KBK_MEDIASTOP = GLFW_KEY_UNKNOWN,
	KBK_VOLUMEDOWN = GLFW_KEY_UNKNOWN,
	KBK_VOLUMEUP = GLFW_KEY_UNKNOWN,
	KBK_WEBHOME = GLFW_KEY_UNKNOWN,
	KBK_SYSRQ = GLFW_KEY_UNKNOWN,
	KBK_APPS = GLFW_KEY_UNKNOWN,
	KBK_POWER = GLFW_KEY_UNKNOWN,
	KBK_SLEEP = GLFW_KEY_UNKNOWN,
	KBK_WAKE = GLFW_KEY_UNKNOWN,
	KBK_WEBSEARCH = GLFW_KEY_UNKNOWN,
	KBK_WEBFAVORITES = GLFW_KEY_UNKNOWN,
	KBK_WEBREFRESH = GLFW_KEY_UNKNOWN,
	KBK_WEBSTOP = GLFW_KEY_UNKNOWN,
	KBK_WEBFORWARD = GLFW_KEY_UNKNOWN,
	KBK_WEBBACK = GLFW_KEY_UNKNOWN,
	KBK_MYCOMPUTER = GLFW_KEY_UNKNOWN,
	KBK_MAIL = GLFW_KEY_UNKNOWN,
	KBK_MEDIASELECT = GLFW_KEY_UNKNOWN,
	KBK_KEY_COUNT // not actually going to be accurate...
};
#endif