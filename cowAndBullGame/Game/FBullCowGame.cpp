#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	Reset();
}

int FBullCowGame::GetMaxTries() const {
	// MyMaxTries = 1; // Won't work
	return MyMaxTries;
}
int FBullCowGame::GetCurrentTryCount() const {return MyCurrentTry;}

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

bool FBullCowGame::checkGuessValidity(std::string)
{
	return false;
}
