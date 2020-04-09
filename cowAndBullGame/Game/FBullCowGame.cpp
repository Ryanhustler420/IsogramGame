#include "FBullCowGame.h"

int FBullCowGame::GetMaxTries() const {
	// MyMaxTries = 1; // Won't work
	return MyMaxTries;
}
int FBullCowGame::GetCurrentTryCount() const {return MyCurrentTry;}

void FBullCowGame::Reset()
{
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::checkGuessValidity(std::string)
{
	return false;
}
