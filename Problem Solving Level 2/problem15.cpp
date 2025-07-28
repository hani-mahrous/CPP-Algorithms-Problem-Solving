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


void printLetterPattern(int num) 
{
	cout << "\nresult = \n";

	for (int i = 1; i <= num; i++) 
	{
		for (int f = 1; f <= i; f++) 
		{
			cout << char(i + 64);
		}

		cout << endl;
	}

}

int main() {

	printLetterPattern(readPositiveNumber("Enter Number: "));








	return 0;
}