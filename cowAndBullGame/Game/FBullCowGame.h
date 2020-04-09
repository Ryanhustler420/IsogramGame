#pragma once
#include<string>

class FBullCowGame 
{

public:
	FBullCowGame(); // constructor

	int GetMaxTries() const; // const only works inside class only
	int GetCurrentTryCount() const;
	bool IsGameWon() const;
	
	void Reset(); // TODO: make a more rich return value.
	bool checkGuessValidity(std::string); // TODO: make a more rich return value.

// Please try and ignore this and focus on the interface above ^^
private:
	// member variables
	// see constructor for init values...
	int MyCurrentTry;
	int MyMaxTries;
};