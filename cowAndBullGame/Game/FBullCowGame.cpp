#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame()
{
	Reset();
}

int32 FBullCowGame::GetMaxTries() const {
	// MyMaxTries = 1; // Won't work
	return MyMaxTries;
}

int32 FBullCowGame::GetCurrentTryCount() const {return MyCurrentTry;}

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::checkGuessValidity(FString)
{
	return false;
}
