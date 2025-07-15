#include <iostream>
#include <string>
using namespace std;


enum enOper { Add = '+', Subtract = '-', Divide = '/', Multiply = '*' };

float readNumber(string msg) {

	float num;
	cout << msg << endl;
	cin >> num;
	return num;

}

enOper readOperation() {

	char oper = '+';
	cout << "Enter Operation ( + , - , * , / ): \n";
	cin >> oper;
	return (enOper)oper;

}

float calcNums(float num1, float num2, enOper operation) {

	switch (operation)
	{
	case enOper::Add :
		return num1 + num2;

	case enOper::Subtract:
		return num1 - num2;

	case enOper::Multiply:
		return num1 * num2;

	case enOper::Divide:
		return num1 / num2;

	default:
		return num1 + num2;
	}
}

int main() {

	float num1 = readNumber("Enter Number 1: ");
	float num2 = readNumber("Enter Number 2: ");
	enOper oper = readOperation();


	cout << "Result = " << calcNums(num1, num2, oper)   << endl;



	return 0;
}