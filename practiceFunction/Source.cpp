/*

Write a program with 2 functions (Pass by VALUE): 
GetValue() – Asks the user to enter an integer value and returns it.

Factorial () computes the factorial of a number (n!).  The function is passed an integer value and returns a computed factorial value.

The main() function should loop asking for a value and computing the factorial until the user selects to quit.

*/

#include <iostream>
using namespace std;

// Function Declaration 
int getValue(); 
int calculatedFactorial(int myValue); //function declaration when passing by value 


int main()
{
	char answer = 'Y';
	do {
		int value;
		int factorial; // Declare variable to catch the value collected when passing by value 
		value = getValue(); //Function Call 

		cout << " The entered value is " << value << endl;

		// Call the function to get factorial 
		factorial = calculatedFactorial(value); // apply only when passing by value 
		cout << " The factorial of " << value << " is " << factorial << endl;
		cout << "" << endl;
		cout << " Do you want to continue? Enter Y for Yes, or enter any key for quit" << endl;
		
		cin >> answer; 
	} while (answer == 'Y' || answer == 'y');
	return 0;
	
}

int getValue() // Function definition: serves to get a value from the user and returns the value
{
	int userInput;
	cout << "" << endl;
	cout << " Please enter an integer number: ";
	cin >> userInput;
	return userInput;
}

//Passing by value
int calculatedFactorial(int myValue)
{
	int factorial = 1;
	int i;


	for (i = 1; i <= myValue; i++)
	{
		factorial = factorial * i;
	}

	return factorial;
}


