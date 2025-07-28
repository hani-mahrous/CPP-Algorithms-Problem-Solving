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


int countDigitFrequency( int Number, int digitToCheck)
{
	int remainder = 0;
	int rebeat = 0;

	while (Number > 0)
	{
		remainder = Number % 10;
		Number = Number / 10;

		if (remainder == digitToCheck)
		{
			rebeat++;
		}
	}

	return rebeat;
}

void printAllDigitsFrequencey(int number) 
{
	int remainder = 0;

	cout << endl;

	for (int i = 0; i <= 9; i++) 
	{
		int freq = countDigitFrequency(number, i);

		if (freq > 0) 
		{
			cout << "Digit " << i << " Frequency is " << freq << " Times" << endl;
		}

	}
}

int main() {

	int number = readPositiveNumber("Enter Number: ");

	printAllDigitsFrequencey(number);







	return 0;
}