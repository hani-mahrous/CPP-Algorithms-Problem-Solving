#include <iostream>
using namespace std;

float readNumber()
{
	float num = 0;
	cout << "Enter Number: \n";
	cin >> num;
	return num;
}

int myRound(float number) 
{
	int intPart = (int)number;
	float fracPart = number - intPart;

	if ( abs(fracPart) >= .5 ) 
	{

		if (number > 0) {
			return intPart + 1;
		}
		else
		{
			return intPart - 1;
		}
	}
	else
	{
		return intPart;
	}
	
}

int main() {

	float number = readNumber();
	cout << "My Round: " << myRound(number) << endl;
	cout << "C++: " << round(number) << endl;


	return 0;
}



