#include <iostream>
using namespace std;

float readNumber()
{
	float num = 0;
	cout << "Enter Number: \n";
	cin >> num;
	return num;
}

int myFloor(float number) 
{
	if (number > 0) 
	{
		return (int)number;
	}
	else
	{
		return (int)number - 1;
	}

}

int main() 
{

	float number = readNumber();
	cout << "My Floor: " << myFloor(number) << endl;
	cout << "C++: " << floor(number) << endl;


	return 0;
}



