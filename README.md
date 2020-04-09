# IsogramGame
Basic Text Based Game To Demonstrate Programming In C++ 

## The Requirement:-

> inputs

- off course we need string input
- all lower case, right length and isogram,
- we need the tries number as an input with int type.
- we need hidden number.
- we need to check if that has non repeating words.
- we can check the hidden world length should not cross the length of word given by the user

> output

- if the give worl length is long than hidden word than show error
- if user enter numbers show errors
- we show bull = 5, cow = 2 like this 
- we show you won if all the character matches with the hidden word

> taks user need to do

-> guess the hidden word within X times.


> any performance limies worth mentioning?

-> since, it's a console based game we won't have any performace issue , i meaning we can
but we prevent them with some of the edge cases.

> what assets do we need? (art, sound, story text etc.)

-> well well well we don't need any of those but just a little bit of graphics to
show that the game has an image at all.


> Possible future ideas (The NO List):-

-> Give feedback on every key press. shake screen if two character occur
-> have a large dictionaty of hidden words.
-> user selectable word length, and difficulty.
-> checking the user's guess is a dictionary isogram.
-> maybe we can provide a time limit for the guesses.

**REMEMBER: if a solution is a house than project is like a room in that house.**


## Starting 

> Create an Empty Application With no boilder plate or any header files, just pure empty, for this to work follow below steps.
- open vs
- keep project name "Game"
- keep solution name "cowAndBullGame"
- click Done or Create
- Now right click on the project on solution explorer and go to Add -> New Item... > Choose C++ File(.cpp) and call this **main.cpp** (easy way to do, because it will connect the source file with project)
- Another way is the create the main.cpp manually with File -> New -> File... > Choose C++ File(.cpp) and it will open a file called Sourse1.cpp now as soon as you save this it will ask you to save to any location and you gonna choose the same directory but hey this is still unattached with the project, you can attach this to project if you right click on project in solution explorer and go to Add -> Existing Item... than Add that saved file, than it gonna attach that file to project...


## INFORMATION

- "#" represent a "preprocessor directive";
- #include copies-and-pastes other code.
- The idea of using library code.
- Use <> for standard library.
- Use " " for files you have created yourself.
- Notice the namespace icon in autocomplete
- import iostream library and use std namespace.

> code snippet

```c++

// pre_processer_directive that is hash, anything starts with # is a preProcessor there are few.
// As soon as we build our project it's just gonna go and copy and paste some code from different file to this file
// This is what preProcessor does here...

// #include"MyCode.h" using doble quotes if the file is ours.
#include<iostream> // we we importing standard stuff than we gonna have to use <> angular brackets.


// if we don't use this below namespace than we have to write the following line as std::cout<<"";
using namespace std;
// since we are using this we have to write cout<<""; without std:: so just we can get rid of this.
// RISK: function name clash can occure if using namespaces a lot. because two namespace can have same name function., here the word "USING" is real riskiest part. apart from that there is nothing wrong with namespace usage.  

int main()
{
	// NOTE: cout is little bit strange piece, so this use something called an overloaded operator.
	// NOTE: cout is an object. It is an object of the ostream class, which is used for sending output to the standard output stream (usually the terminal window in which you run the program)
	std::cout << "I am encrypet inside std namespace, if you don't wanna use std:: everytime tha write \"using namespace std;\" at the top and below the preprocessor directives.";
	// cout << "Welcome to Bulls and Cows\n"; // cout means character out
	// cout << endl;
	cout << "Welcome to Bulls and Cows" << endl;
	return 0;
}

```
