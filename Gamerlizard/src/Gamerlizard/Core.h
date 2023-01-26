#pragma once

#ifdef GL_PLATFORM_WINDOWS
	#ifdef GL_BUILD_DLL
		#define GAMERLIZARD_API __declspec(dllexport)
	#else
		#define GAMERLIZARD_API __declspec(dllimport)
	#endif // GL_BUILD_DLL
#else
	#error Gamerlizard only supports Windows
#endif

#define BIT(x) (1 << x)

