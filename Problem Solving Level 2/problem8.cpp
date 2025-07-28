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

int countDigitFrequency(int digitToCheck, int number)
{
	int remainder = 0;
	int rebeat = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;

		if (remainder == digitToCheck)
		{
			rebeat++;
		}
	}

	return rebeat;
}


int main() 
{

	int Number = readPositiveNumber("Enter frequency: ");
	int digitToCheck = readPositiveNumber("Enter Number: ");



	cout << "\nDigit " << digitToCheck << " Frequency is " << countDigitFrequency(digitToCheck, Number) << " Times" << endl;







	return 0;
}