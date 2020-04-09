#include "FBullCowGame.h"

int FBullCowGame::GetMaxTries(){return MyMaxTries;}
int FBullCowGame::GetCurrentTryCount(){return MyCurrentTry;}

void FBullCowGame::Reset()
{
	return;
}

bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::checkGuessValidity(std::string)
{
	return false;
}
