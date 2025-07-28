#include <iostream>
using namespace std;

float readNumber()
{
	float num = 0;
	cout << "Enter Number: \n";
	cin >> num;
	return num;
}

float myAbs(float number) 
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		if (number > 0)
		{
			return number;
		}
		else
		{
			return number * (-1);
		}
	}
}

int main() {

	float number = readNumber();
	cout << "My: " << myAbs(number) << endl;
	cout << "C++: " << abs(number) << endl;


	return 0;
}



