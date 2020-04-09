#include<iostream>
#include<string>

using namespace std;

const string EMPTY_STRING = "";

int main()
{
	// introduce the game
	constexpr int WORD_LENTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game.\n"; // following inconsistency meaning if using \n than use only that, btw \n doesn't flesh the output buffer
	cout << "Can you guess the " << WORD_LENTH;
	cout << " lette isogram I'm thinking of?\n";
	cout << endl;
	
	// get a guess from the player
	string Guess = EMPTY_STRING;

	// repeat the guess back to them
	do
	{
		cout << "Enter your guess: "; 
		getline(cin, Guess);
		cout << "Your guess was: " << Guess << endl;
		// we gonna use getline() function to take multi word string input
	} while (Guess != EMPTY_STRING);

	cout << endl;
	return 0;
}