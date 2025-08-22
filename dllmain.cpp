// i686-w64-mingw32-gcc -shared -o test.dll test.cpp

#include <windows.h>
#include "pch.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	MessageBox(NULL, TEXT("Application is Vulnerable"), TEXT("DLL Injection Test"), 0);
	return 0;
}
