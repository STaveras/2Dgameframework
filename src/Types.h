// File: Types.h
// Author: Stanley Taveras
// Created: 2/20/2010
// Modified: 2/24/2010

#if !defined(_TYPES_H_)
#define _TYPES_H_

// TODO : Write your own wrapper for the DirectX math classes...

#ifdef WIN32
#include <d3d9.h>
#include <d3dx9.h>
#include <d3dx9math.h>
#endif

#include "color.h"

#define byte unsigned char
#define vector2 D3DXVECTOR2 // TODO: As above, write the wrapper so you don't have to use raw d3d math calls in your code...
#define matrix4x4 D3DXMATRIX
#define rect RECT

#endif