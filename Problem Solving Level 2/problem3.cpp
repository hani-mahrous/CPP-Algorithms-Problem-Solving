#include <iostream>
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

bool isPerfectNumber(int number) 
{
	int sum = 0;

	for (int i = 1; i < number; i++) 
	{
		if (number % i == 0) 
		{
			sum += i;
		}

	}

	return (sum == number);
}

void printResults(int Number)
{
	if (isPerfectNumber(Number))
		cout << Number << " Is Perfect Number.\n";  // If true, print that the number is perfect.
	else
		cout << Number << " Is NOT Perfect Number.\n"; // Otherwise, print that it is not perfect.
}

int main() {



	printResults(readPositiveNumber("Enter Number: "));

	




	return 0;
}