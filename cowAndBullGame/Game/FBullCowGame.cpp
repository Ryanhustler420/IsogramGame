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

	// Can't use constexpr for strings..
	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

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

// receives a VALID guess, increaments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	// increament the turn number
	MyCurrentTry++;

	// setup a return variable
	BullCowCount BullCowCount;

	// loop through all letters in the guess
		// compare letters against the hidden word

	return BullCowCount;
}
