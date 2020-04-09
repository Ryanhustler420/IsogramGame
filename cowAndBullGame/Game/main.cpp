#include<iostream>
#include<string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
std::string GetGuess();

FBullCowGame BCGame; // instantiate a new Game

const std::string EMPTY_STRING = "";

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
	int MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses
	// TODO change from FOR to Whilc loop once we are validating tries
	while (BCGame.GetCurrentTryCount() < MaxTries)
	{
		// TODO: make loop checking for valid guesses...
		std::string Guess = GetGuess();

		// Submit valid guess to the game
		// Print number of bulls and cows
		std::cout << "Your guess was: " << Guess;
		std::cout << std::endl << std::endl;
	}
}

std::string GetGuess()
{
	// get a guess from the player
	int currentTry = BCGame.GetCurrentTryCount();
	int maxTries = BCGame.GetMaxTries();
	std::cout << "Try (" << currentTry << "/" << maxTries << ") Enter your guess: ";
	std::string Guess = EMPTY_STRING;
	std::getline(std::cin, Guess);
	return Guess;
}

void PrintIntro()
{
	// introduce the game
	constexpr int WORD_LENTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n"; // following inconsistency meaning if using \n than use only that, btw \n doesn't flesh the output buffer
	std::cout << "Can you guess the " << WORD_LENTH;
	std::cout << " lette isogram I'm thinking of?\n";
	std::cout << std::endl;
	return; // always do this
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)?";
	std::string Response = EMPTY_STRING;
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}