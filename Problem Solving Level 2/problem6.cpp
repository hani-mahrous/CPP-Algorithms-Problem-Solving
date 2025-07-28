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

int sumOfDigits(int number)
{
	int remainder = 0, sum = 0;

	while (number > 0) 
	{
		remainder = number % 10;
		number = number / 10;
		sum += remainder;
	}

	return sum;
}

int main() 
{


	cout << "\nSum Of Digits = " << sumOfDigits(readPositiveNumber("Enter Number: ")) << endl;







	return 0;
}