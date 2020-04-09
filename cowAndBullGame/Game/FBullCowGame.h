#pragma once
#include<string>

using FString = std::string;
using int32 = int;

class FBullCowGame 
{

public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const; // const only works inside class only
	int32 GetCurrentTryCount() const;
	bool IsGameWon() const;
	
	void Reset(); // TODO: make a more rich return value.
	bool checkGuessValidity(FString); // TODO: make a more rich return value.
	// Provide a method for counting bulls and cows, and increasing turn #

// Please try and ignore this and focus on the interface above ^^
private:
	// member variables
	// see constructor for init values...
	int32 MyCurrentTry;
	int32 MyMaxTries;
};