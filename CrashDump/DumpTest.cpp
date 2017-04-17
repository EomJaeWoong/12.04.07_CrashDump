#include "CrashDump.h"
#include "APIHook.h"

void main()
{
	CCrashDump::CCrashDump();

	int *a = nullptr;
	if (a == nullptr)
		CCrashDump::Crash();
}