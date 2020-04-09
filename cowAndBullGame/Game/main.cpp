/* 
This is the console executable, that makes use of the BullCow class
This acts as the view in MVC pattern, and is responsible for all
user interaction, For game logic see the FBullCowGame class.
*/

#include<iostream>
#include<string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
FText GetValidGuess();

FBullCowGame BCGame; // instantiate a new Game

const FText EMPTY_STRING = "";

// the entry point for out application
int main()
{
	bool bPlayAgain = false;
	do{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0; // exit the application
}

void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses
	while (BCGame.GetCurrentTryCount() < MaxTries) // TODO change from FOR to Whilc loop once we are validating tries
	{
		FText Guess = GetValidGuess();

		// Submit valid guess to the game
		FBullCowCount BullCowCount = BCGame.SubmitValidGuess(Guess);

		// Print number of bulls and cows
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ", Cows = " << BullCowCount.Cows << std::endl;
		std::cout << std::endl << std::endl;
	}
}

// loop continually until the user gives a valid guess
FText GetValidGuess()
{
	EGuessWordStatus Status = EGuessWordStatus::Invalid_Status;
	FText Guess = EMPTY_STRING;
	do {
		// get a guess from the player
		int32 currentTry = BCGame.GetCurrentTryCount();
		int32 maxTries = BCGame.GetMaxTries();
		std::cout << "Try (" << currentTry << "/" << maxTries << ") Enter your guess: ";
		std::getline(std::cin, Guess);

		Status = BCGame.checkGuessValidity(Guess);
		switch (Status)
		{
			case EGuessWordStatus::Not_Isogram:
				std::cout << "You entered repeated letters, Please enter isogram word only!!!\n";
				break;
			case EGuessWordStatus::Wrong_Length:
				std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word.\n";
				break;
			case EGuessWordStatus::Not_LowerCase:
				std::cout << "Please don't use upper case letter(s).\n";
				break;
			default:
				break; // assume the guess is valid
		}
		std::cout << std::endl;
	} while (Status != EGuessWordStatus::OK);
	return Guess;
}

void PrintIntro()
{
	// introduce the game
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " lette isogram I'm thinking of?\n";
	std::cout << std::endl;
	return; // always do this
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)?";
	FText Response = EMPTY_STRING;
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}