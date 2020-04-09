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
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	// increament the turn number
	MyCurrentTry++;

	// TODO: Prevent The Number Input

	// loop through all letters in the guess
	int32 HiddenWordLength = MyHiddenWord.length();

	// setup a return variable
	FBullCowCount BullCowCount;

	// checks for repeating characters.
	// maybe we need to call "checkGuessValidity" in here...

	// checking for Guess length if increases than return
	if (Guess.length() > HiddenWordLength) return BullCowCount;

	for (int32 i = 0; i < HiddenWordLength; i++)
	{
		// compare letters against the hidden word
		for (int32 j = 0; j < HiddenWordLength; j++)
		{
			char currentHiddenChar = MyHiddenWord[i];
			// We need to first check if "first char of hidden" word is at the right position of Guessed Word.
			if (currentHiddenChar == Guess[j])
			{
				BullCowCount.Bulls++;
			}
			else
			{
				// checks if the word is even present in the string at all.
				for (int32 nestCheckCounter = i + 1; nestCheckCounter < Guess.length(); nestCheckCounter++)
				{
					if (currentHiddenChar == Guess[nestCheckCounter]) {
						BullCowCount.Cows++;
						break;
					}
				}
			}

			// bull -> right char at the right position
			// cow -> right char at the wrong position

			// hidden word -> hello
			// guessed word -> holle
		}
	}
	return BullCowCount;
}
