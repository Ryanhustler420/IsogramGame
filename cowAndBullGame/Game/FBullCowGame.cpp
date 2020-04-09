#include "FBullCowGame.h"

// these below two lines will go togather.
#include<map>
#define TMap std::map // this is simply like cut and paste like "using" keyword.

using int32 = int;

FBullCowGame::FBullCowGame(){Reset();}

int32 FBullCowGame::GetMaxTries() const {return MyMaxTries;}
int32 FBullCowGame::GetCurrentTryCount() const {return MyCurrentTry;}
int32 FBullCowGame::GetHiddenWordLength() const{return MyHiddenWord.length();}
FString FBullCowGame::GetCurrentHiddenWord() const { return MyHiddenWord; }
bool FBullCowGame::IsGameWon() const{return bGameIsWon;}

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	const FString HIDDEN_WORD = "ant";
	
	MyMaxTries = MAX_TRIES;
	MyHiddenWord = HIDDEN_WORD;
	bGameIsWon = false;

	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsLowerCase(FString Guess) const
{
	for (auto& c : Guess)
		if (!std::islower(static_cast<unsigned char>(c)))return false;
	return true;
}

EGuessWordStatus FBullCowGame::checkGuessValidity(FString Guess) 
{ 
	if (!IsIsogram(Guess)) // if the guess isn't an isogram
	{
		return EGuessWordStatus::Not_Isogram;
	}
	else if (!IsLowerCase(Guess)) // if the guess isn't all lowercase
	{
		return EGuessWordStatus::Not_LowerCase;
	}
	else if (Guess.length() != GetHiddenWordLength()) // if the guess length is wrong
	{
		return EGuessWordStatus::Wrong_Length;
	}
	else // otherwise return ok
	{
		return EGuessWordStatus::OK;
	}
}

// receives a VALID guess, increaments turn, and returns count
FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess)
{
	MyCurrentTry++;
	FBullCowCount BullCowCount;
	int32 WordLength = MyHiddenWord.length();

	for (int32 MHWChar = 0; MHWChar < WordLength; MHWChar++)
	{
		// compare letters against the guess word
		for (int32 GChar = 0; GChar < WordLength; GChar++)
		{
			// We need to first check if "first char of hidden" word is at the right position of Guessed Word.
			if (MyHiddenWord[MHWChar] == Guess[GChar])
			{
				if (MHWChar == GChar)
				{
					BullCowCount.Bulls++; // increament bull
				}
				else
				{
					BullCowCount.Cows++; // must be a cow;
				}
			}
		}
	}

	if (BullCowCount.Bulls == WordLength)
		bGameIsWon = true;
	else
		bGameIsWon = false;

	return BullCowCount;
}

bool FBullCowGame::IsIsogram(FString Guess) const
{
	// treat 0 & 1 letter words as isoGrams
	if (Guess.length() <= 1) { return true; }

	// setup our map
	TMap<char, bool> LetterSeen;
	for (auto Letter : Guess) 
	{
		Letter = tolower(Letter);
		if (LetterSeen[Letter]) 
		{
			return false; // we do NOT have an isogram
		}
		else 
		{
			LetterSeen[Letter] = true; // add the letter to the map as seen
		}			
	}
	
	return true; // for example in case where /0 is entered
}
