#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string msg)
{
	int number = 0;

	do {

		cout << msg << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}

int reverseNumber(int number)
{
	int remainder = 0;
	int newNumber = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		newNumber = newNumber * 10 + remainder;
	}

	return newNumber;
}

bool isPalidrome(int number)
{
	return number == reverseNumber(number);
}

int main() 
{

	if (isPalidrome(readPositiveNumber("Enter Number: "))  ) {
		cout << "\nYes , it is a Palindrome number.\n";
	}
	else
	{
		cout << "\nNo , it is NOT a Palindrome number.\n";
	}








	return 0;
}