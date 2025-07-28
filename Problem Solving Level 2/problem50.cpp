#include <iostream>
using namespace std;

float readNumber()
{
	float number = 0;
	cout << "Enter Number: \n";
	cin >> number;
	return number;
}

float mySqrt(float number) {
	return pow(number, .5);
}

int main() {

	float number = readNumber();
	cout << "My Sqrt: " << mySqrt(number) << endl;
	cout << "C++: " << sqrt(number) << endl;


	return 0;
}



