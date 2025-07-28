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

void printPerfectNumbersFrom1ToN(int num) 
{
	for (int i = 1; i <= num; i++) 
	{
		if (isPerfectNumber(i)) 
		{
			cout << i << endl;
		}
	}
}

int main() 
{



	printPerfectNumbersFrom1ToN(readPositiveNumber("Enter Number: "));

	




	return 0;
}