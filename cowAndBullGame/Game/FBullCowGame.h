#pragma once
#include<string>

using FString = std::string;
using int32 = int;

// All values initialize to zero, ALWAYS.
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame 
{

public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const; // const only works inside class only
	int32 GetCurrentTryCount() const;
	bool IsGameWon() const;
	
	void Reset(); // TODO: make a more rich return value.
	bool checkGuessValidity(FString); // TODO: make a more rich return value.
	FBullCowCount SubmitGuess(FString);

// Please try and ignore this and focus on the interface above ^^
private:
	// member variables
	// see constructor for init values...
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};