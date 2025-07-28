#include <iostream>
using namespace std;

float readNumber()
{
	float number = 0;
	cout << "Enter Number: \n";
	cin >> number;
	return number;
}

int myCeil(float number) {
	if (number > 0) {
		return (int)number + 1;
	}
	else
	{
		return (int)number;
	}

}

int main() {

	float number = readNumber();
	cout << "My Ceil: " << myCeil(number) << endl;
	cout << "C++: " << ceil(number) << endl;


	return 0;
}



