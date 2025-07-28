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


void printDigits(int number)
{
	int remainder = 0;

	while (number > 0) 
	{
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}

int main() 
{

	
	printDigits(readPositiveNumber("Enter Number: "));


	




	return 0;
}