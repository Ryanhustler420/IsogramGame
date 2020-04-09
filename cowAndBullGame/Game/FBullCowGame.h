#pragma once
// Please do-not use name spaces here...

class FBullCowGame 
{

public:
	void Reset(); // TODO: make a more rich return value.
	int GetMaxTries();
	int GetCurrentTryCount();
	bool IsGameWon();
	bool checkGuessValidity(string); // TODO: make a more rich return value.
	// void PlayGame();
	// bool IsIsogram();
	// bool IsGivenWordLengthMatchWithHiddenWord();

// Please try and ignore this and focus on the interface above ^^
private:
	// member variables
	int MyCurrentTry;
	int MyMaxTries;
};