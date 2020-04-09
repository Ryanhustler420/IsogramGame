#include<iostream>
#include<string>

using namespace std;

const string EMPTY_STRING = "";

// we need this empty body function signature at the top because the program needs to know which functions are gonna be the part of this program.
void PrintIntro();
string GetGuess();

// the entry point for out application
int main()
{
	PrintIntro();

	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		cout << "Your guess was: " << GetGuess();
		cout << endl;
	}

	cout << endl;
	return 0;
}

string GetGuess() 
{
	// get a guess from the player
	cout << "Enter your guess: ";
	string Guess = EMPTY_STRING;
	getline(cin, Guess);
	return Guess;
}

void PrintIntro()
{
	// introduce the game
	constexpr int WORD_LENTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n"; // following inconsistency meaning if using \n than use only that, btw \n doesn't flesh the output buffer
	cout << "Can you guess the " << WORD_LENTH;
	cout << " lette isogram I'm thinking of?\n";
	cout << endl;
	return; // always do this
}