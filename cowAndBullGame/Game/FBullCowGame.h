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

// its global so we can even have OK in another enum at all. PLEASE DO NOT USE BELOW CODE.
//	enum EWordStatus
//	{
//		OK, 
//		Not_Isogram
//	};

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
	bool IsLowerCase(FString) const;
	bool IsIsogram(FString);
	EGuessWordStatus checkGuessValidity(FString); // TODO: make a more rich return value.
	
	void Reset(); // TODO: make a more rich return value.
	FBullCowCount SubmitGuess(FString);

// Please try and ignore this and focus on the interface above ^^
private:
	// member variables
	// see constructor for init values...
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};