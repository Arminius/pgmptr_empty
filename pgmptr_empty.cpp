#include "stdafx.h"
#include <windows.h>
#include <atlstr.h>

int main()
{
	char* pgmptr = nullptr;
	auto errcode = _get_pgmptr(&pgmptr); // pgmptr is now empty string

	char modulename[MAX_PATH];
	GetModuleFileNameA(nullptr, modulename, MAX_PATH); // modulename is correct

	return 0;
}
