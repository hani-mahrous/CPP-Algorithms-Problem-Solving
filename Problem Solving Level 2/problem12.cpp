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

void invertedNumberPattern(int number)
{
	cout << "\nresult = \n";

	for (int i = number; i >= 1; i--) 
	{
		for (int f = i; f >= 1;f--) 
		{
			cout << i;
		}
		
		cout << endl;
	}

}

int main() {

	invertedNumberPattern(readPositiveNumber("Enter Number: "));








	return 0;
}