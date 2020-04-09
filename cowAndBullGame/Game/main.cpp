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
	cout << "Your guess was: " << GetGuess();

	// repeat the guess back to them
	cout << endl;
	return 0;
}

// get a guess from the player
string GetGuess() {
	cout << "Enter your guess: ";
	string Guess = EMPTY_STRING;
	getline(cin, Guess);
	return Guess;
}

// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n"; // following inconsistency meaning if using \n than use only that, btw \n doesn't flesh the output buffer
	cout << "Can you guess the " << WORD_LENTH;
	cout << " lette isogram I'm thinking of?\n";
	cout << endl;
	return; // always do this
}