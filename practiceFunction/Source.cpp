/*

Write a program with 2 functions: 
GetValue() – Asks the user to enter an integer value and returns it.

Factorial () computes the factorial of a number (n!).  The function is passed an integer value and returns a computed factorial value.

The main() function should loop asking for a value and computing the factorial until the user selects to quit.

*/

#include <iostream>
using namespace std;

// Function Declaration 
int getValue(); 
//int calculatedFactorial(int myValue); //function declaration when passing by value 
void calculatedFactorial(int myValue, int &factorial); //function declaration when passing by referrence  

int main()
{

	int value;
	// int factorial; // Declare variable to catch the value collected when passing by value 
	int factorial = 0;
	value = getValue(); //Function Call 
	cout << " The entered value is " << value << endl;


	// Call the function to get factorial 
	//factorial = calculatedFactorial(value); // apply only when passing by value 
	calculatedFactorial(value, factorial); // apply only when passing by referrence
	cout << " The factorial of " << value << " is " << factorial << endl;

	system("pause");
	return 0;

}

int getValue() // Function definition: serves to get a value from the user and returns the value
{
	int userInput;
	cout << " Please enter an integer number: ";
	cin >> userInput;
	return userInput;
}

/*
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
*/

// Passing by referrence 
void calculatedFactorial(int myValue, int &factorial)
{
	factorial = 1;
	int i;


	for (i = 1; i <= myValue; i++)
	{
		factorial = factorial * i;
	}

	return;
}