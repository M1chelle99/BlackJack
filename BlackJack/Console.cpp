#include "Console.h"

Console::Console() {
	m_hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(m_hConsole);
}

Console::~Console() {
	CloseHandle(m_hConsole);
}

DWORD Console::write(const wchar_t* chars, DWORD length, COORD start) {
	/*DWORD dwBytesWritten = 0;
	WriteConsoleOutputCharacter(m_hConsole, chars, length, start, &dwBytesWritten);
	return dwBytesWritten;*/
	return 0;
}