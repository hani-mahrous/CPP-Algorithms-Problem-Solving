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

void printInvertedLetterPattern(int number) 
{
	cout << "\nresult = \n";

	for (int i = number; i >= 1; i--) 
	{
		for (int f = i + 64 ; f > 64;f--) 
		{
			cout << char(i + 64);
		}
		
		cout << endl;
	}

}

int main() {

	printInvertedLetterPattern(readPositiveNumber("Enter Number: "));








	return 0;
}