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