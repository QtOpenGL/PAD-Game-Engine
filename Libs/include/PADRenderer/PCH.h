#pragma once
////////////////////////////////////////
////		 LIB	INCLUDES		////
////////////////////////////////////////
#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "glew32.lib")
#pragma comment(lib, "simplelogger.lib")

////////////////////////////////////////
////		 STD	INCLUDES		////
////////////////////////////////////////
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <functional>
#include <unordered_map>

////////////////////////////////////////
////	INTERNAL		INCLUDES	////
////////////////////////////////////////
#include <Common.h>
#include <Math/Vector2.h>
#include <Math/Vector3.h>
#include <Math/Vector4.h>
#include <Math/Matrix4x4.h>

////////////////////////////////////////
////	EXTERNAL		INCLUDES	////
////////////////////////////////////////
#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <Logger/SimpleLogger.h>