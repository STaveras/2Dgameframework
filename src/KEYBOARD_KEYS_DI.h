// File: KEYBOARD_KEYS_DI.h
// Author: Stanley Taveras
// Created: 3/4/2010
// Modified: 3/4/2010

#if !defined(_KEYBOARD_KEYS_DI_H_)
#define _KEYBOARD_KEYS_DI_H_

#ifdef _WIN32
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>

enum KEYBOARD_KEYS
{
	KBK_ESCAPE          = DIK_ESCAPE,          
	KBK_1               = DIK_1,               
	KBK_2               = DIK_2,               
	KBK_3               = DIK_3,              
	KBK_4               = DIK_4,               
	KBK_5               = DIK_5,               
	KBK_6               = DIK_6,               
	KBK_7               = DIK_7,               
	KBK_8               = DIK_8,               
	KBK_9               = DIK_9,               
	KBK_0               = DIK_0,               
	KBK_MINUS           = DIK_MINUS,           
	KBK_EQUALS          = DIK_EQUALS,          
	KBK_BACK            = DIK_BACK,            
	KBK_TAB             = DIK_TAB,             
	KBK_Q               = DIK_Q,               
	KBK_W               = DIK_W,               
	KBK_E               = DIK_E,               
	KBK_R               = DIK_R,               
	KBK_T               = DIK_T,               
	KBK_Y               = DIK_Y,               
	KBK_U               = DIK_U,               
	KBK_I               = DIK_I,               
	KBK_O               = DIK_O,              
	KBK_P               = DIK_P,               
	KBK_LBRACKET        = DIK_LBRACKET,        
	KBK_RBRACKET        = DIK_RBRACKET,        
	KBK_RETURN          = DIK_RETURN,          
	KBK_LCONTROL        = DIK_LCONTROL,        
	KBK_A               = DIK_A,               
	KBK_S               = DIK_S,               
	KBK_D               = DIK_D,               
	KBK_F               = DIK_F,               
	KBK_G               = DIK_G,               
	KBK_H               = DIK_H,               
	KBK_J               = DIK_J,               
	KBK_K               = DIK_K,               
	KBK_L               = DIK_L,               
	KBK_SEMICOLON       = DIK_SEMICOLON,       
	KBK_APOSTROPHE      = DIK_APOSTROPHE,      
	KBK_GRAVE           = DIK_GRAVE,           
	KBK_LSHIFT          = DIK_LSHIFT,          
	KBK_BACKSLASH       = DIK_BACKSLASH,       
	KBK_Z               = DIK_Z,               
	KBK_X               = DIK_X,               
	KBK_C               = DIK_C,               
	KBK_V               = DIK_V,               
	KBK_B               = DIK_B,               
	KBK_N               = DIK_N,               
	KBK_M               = DIK_M,               
	KBK_COMMA           = DIK_COMMA,          
	KBK_PERIOD          = DIK_PERIOD,          
	KBK_SLASH           = DIK_SLASH,           
	KBK_RSHIFT          = DIK_RSHIFT,          
	KBK_MULTIPLY        = DIK_MULTIPLY,        
	KBK_LMENU           = DIK_LMENU,           
	KBK_SPACE           = DIK_SPACE,           
	KBK_CAPITAL         = DIK_CAPITAL,         
	KBK_F1              = DIK_F1,              
	KBK_F2              = DIK_F2,              
	KBK_F3              = DIK_F3,              
	KBK_F4              = DIK_F4,              
	KBK_F5              = DIK_F5,              
	KBK_F6              = DIK_F6,              
	KBK_F7              = DIK_F7,              
	KBK_F8              = DIK_F8,              
	KBK_F9              = DIK_F9,              
	KBK_F10             = DIK_F10,             
	KBK_NUMLOCK         = DIK_NUMLOCK,         
	KBK_SCROLL          = DIK_SCROLL,          
	KBK_NUMPAD7         = DIK_NUMPAD7,         
	KBK_NUMPAD8         = DIK_NUMPAD8,         
	KBK_NUMPAD9         = DIK_NUMPAD9,         
	KBK_SUBTRACT        = DIK_SUBTRACT,        
	KBK_NUMPAD4         = DIK_NUMPAD4,         
	KBK_NUMPAD5         = DIK_NUMPAD5,         
	KBK_NUMPAD6         = DIK_NUMPAD6,         
	KBK_ADD             = DIK_ADD,             
	KBK_NUMPAD1         = DIK_NUMPAD1,         
	KBK_NUMPAD2         = DIK_NUMPAD2,         
	KBK_NUMPAD3         = DIK_NUMPAD3,         
	KBK_NUMPAD0         = DIK_NUMPAD0,         
	KBK_DECIMAL         = DIK_DECIMAL,         
	KBK_OEM_102         = DIK_OEM_102,         
	KBK_F11             = DIK_F11,             
	KBK_F12             = DIK_F12,             
	KBK_F13             = DIK_F13,             
	KBK_F14             = DIK_F14,             
	KBK_F15             = DIK_F15,             
	KBK_KANA            = DIK_KANA,            
	KBK_ABNT_C1         = DIK_ABNT_C1,         
	KBK_CONVERT         = DIK_CONVERT,         
	KBK_NOCONVERT       = DIK_NOCONVERT,       
	KBK_YEN             = DIK_YEN,             
	KBK_ABNT_C2         = DIK_ABNT_C2,         
	KBK_NUMPADEQUALS    = DIK_NUMPADEQUALS,    
	KBK_PREVTRACK       = DIK_PREVTRACK,       
	KBK_AT              = DIK_AT,              
	KBK_COLON           = DIK_COLON,           
	KBK_UNDERLINE       = DIK_UNDERLINE,       
	KBK_KANJI           = DIK_KANJI,           
	KBK_STOP            = DIK_STOP,            
	KBK_AX              = DIK_AX,              
	KBK_UNLABELED       = DIK_UNLABELED,       
	KBK_NEXTTRACK       = DIK_NEXTTRACK,       
	KBK_NUMPADENTER     = DIK_NUMPADENTER,     
	KBK_RCONTROL        = DIK_RCONTROL,        
	KBK_MUTE            = DIK_MUTE,            
	KBK_CALCULATOR      = DIK_CALCULATOR,      
	KBK_PLAYPAUSE       = DIK_PLAYPAUSE,       
	KBK_MEDIASTOP       = DIK_MEDIASTOP,       
	KBK_VOLUMEDOWN      = DIK_VOLUMEDOWN,      
	KBK_VOLUMEUP        = DIK_VOLUMEUP,        
	KBK_WEBHOME         = DIK_WEBHOME,         
	KBK_NUMPADCOMMA     = DIK_NUMPADCOMMA,     
	KBK_DIVIDE          = DIK_DIVIDE,          
	KBK_SYSRQ           = DIK_SYSRQ,           
	KBK_RMENU           = DIK_RMENU,           
	KBK_PAUSE           = DIK_PAUSE,           
	KBK_HOME            = DIK_HOME,            
	KBK_UP              = DIK_UP,              
	KBK_PGUP            = DIK_PRIOR,           
	KBK_LEFT            = DIK_LEFT,            
	KBK_RIGHT           = DIK_RIGHT,           
	KBK_END             = DIK_END,             
	KBK_DOWN            = DIK_DOWN,            
	KBK_PGDN            = DIK_NEXT,            
	KBK_INSERT          = DIK_INSERT,          
	KBK_DELETE          = DIK_DELETE,          
	KBK_LWIN            = DIK_LWIN,            
	KBK_RWIN            = DIK_RWIN,            
	KBK_APPS            = DIK_APPS,            
	KBK_POWER           = DIK_POWER,           
	KBK_SLEEP           = DIK_SLEEP,           
	KBK_WAKE            = DIK_WAKE,            
	KBK_WEBSEARCH       = DIK_WEBSEARCH,       
	KBK_WEBFAVORITES    = DIK_WEBFAVORITES,    
	KBK_WEBREFRESH      = DIK_WEBREFRESH,      
	KBK_WEBSTOP         = DIK_WEBSTOP,         
	KBK_WEBFORWARD      = DIK_WEBFORWARD,      
	KBK_WEBBACK         = DIK_WEBBACK,         
	KBK_MYCOMPUTER      = DIK_MYCOMPUTER,      
	KBK_MAIL            = DIK_MAIL,            
	KBK_MEDIASELECT     = DIK_MEDIASELECT
};
#endif

#endif