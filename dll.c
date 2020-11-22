#include <windows.h>

extern __declspec (dllexport)  void function234()
{
    MessageBox(NULL, "Window Creation Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
}

/*
HMODULE dll;
dll = LoadLibrary("dll.dll");
typedef void(*MYFUNC)();
MYFUNC function145 = (MYFUNC)GetProcAddress(hLib, "function234");
if (hLib == NULL)
{
    MessageBox(hwnd, "no", "error", NULL);
    break;
}
function145();
FreeLibrary(dll);
*/