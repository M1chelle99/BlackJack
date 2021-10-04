#pragma once

#include <Windows.h>

class Console
{
public:
	Console();
	~Console();

	DWORD write(const wchar_t* chars, DWORD length, COORD start);

private:
	HANDLE m_hConsole;
};