#include "TDebugger.h"

void LogToConsole(FString message)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *message);
}

void LogToScreen(FString message)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("%s"), *message));
}