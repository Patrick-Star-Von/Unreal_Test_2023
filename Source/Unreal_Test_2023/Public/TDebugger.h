#pragma once

#include "CoreMinimal.h"

void LogToConsole(FString message);
void LogToScreen(FString message);

class UNREAL_TEST_2023_API TDebugger
{
public:
	TDebugger();
	~TDebugger();
};
