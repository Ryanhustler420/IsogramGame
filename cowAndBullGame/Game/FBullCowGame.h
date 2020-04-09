/* 
The game logic (no view code or direct user interaction)
The game is simple guess the word game based on Mastermind
*/

#pragma once
#include<string>

// to make the syntax Unreal Engine Friendly
using FString = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EGuessWordStatus
{
	Invalid_Status,
	OK, 
	Not_Isogram,
	Wrong_Length,
	Not_LowerCase
};

class FBullCowGame 
{

public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const; // const only works inside class only
	int32 GetCurrentTryCount() const;
	int32 GetHiddenWordLength() const;
	bool IsGameWon() const;
	FString GetCurrentHiddenWord() const;
	
	EGuessWordStatus checkGuessValidity(FString);
	
	void Reset();
	FBullCowCount SubmitValidGuess(FString);

// Please try and ignore this and focus on the interface above ^^
private:
	int32 MyCurrentTry;
	FString MyHiddenWord;
	bool bGameIsWon;

	bool IsIsogram(FString) const;
	bool IsLowerCase(FString) const;
};