#include <Windows.h>
#include "Console.h"
#include <iostream>


Console g_console;
wchar_t* g_screen;

int main()
{
	g_console.write(L"Hello World", 12, { 0,0 });
	system("pause");
}