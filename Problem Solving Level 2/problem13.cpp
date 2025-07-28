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

void invertedNumPattern(int number) 
{

	cout << "\nresult = \n";
	for (int i = 1; i <= number; i++) 
	{
		for (int f = 1; f <= i; f++) 
		{
			cout << i;
		}

		cout << endl;
	}

}

int main() {

	invertedNumPattern(readPositiveNumber("Enter Number: "));








	return 0;
}