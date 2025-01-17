// Syntax is the rules for the language.
#include <iostream>
using namespace std;
int main()
{
	int first_number, second_number;
	// A syntax error, like forgetting the semicolon, can be detected by the compiler.
	cout << "What is your first number? ";
	cin >> first_number;
	cout << "What is your second number? ";
	cin >> second_number;
	// A runtime error is only detected when the program is running. Like divide by 0.
	// A logic error is a mistake in the algorithm, like multiplying when you should be dividing.
	cout << first_number;
	cout << " divided by ";
	cout << second_number;
	// the following line was written without a semicolon
	cout << " is ";
	cout << first_number / second_number;
	cout << ".\n";
	system("pause");
	return 0;
}