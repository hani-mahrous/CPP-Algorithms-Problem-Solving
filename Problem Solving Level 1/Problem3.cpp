#include <iostream>
using namespace std;

enum enNumberType { Odd = 1 , Even = 2};

int readNumber() {

	int num;
	cout << "Enter number: \n";
	cin >> num;

	return num;
}

enNumberType checkNumberType(int num) {

	int result = num % 2;

	if (result == 0)
	{
		return enNumberType::Even;
	}
	else
	{
		return enNumberType::Odd;
	}
}

void printNumberType(enNumberType numberType) {

	if (numberType == enNumberType::Odd)
	{
		cout << "number is: Odd \n";
	}
	else
	{
		cout << "number is: Even \n";
	}
}

int main() {
	

	printNumberType(checkNumberType(readNumber()));


	return 0;
}