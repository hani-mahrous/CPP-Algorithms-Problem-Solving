#include <iostream>
using namespace std;

enum enPassFial { pass = 1, fail = 2 };

struct stNumbers
{
	int num1;
	int num2;
	int num3;
};

stNumbers readNumbers() {

	stNumbers Numbers;

	cout << "Enter Number 1: \n";
	cin >> Numbers.num1;
	cout << "Enter Number 2: \n";
	cin >> Numbers.num2;
	cout << "Enter Number 3: \n";
	cin >> Numbers.num3;

	return Numbers;
}

int sumNumbers(stNumbers Numbers) {

	return Numbers.num1 + Numbers.num2 + Numbers.num3;

}

float avgNumbers(stNumbers Numbers) {

	return (float)sumNumbers(Numbers) / 3;

}

enPassFial checkResult(float avgNumbers) {

	if (avgNumbers >= 50)
		return enPassFial::pass;
	else
		return enPassFial::fail;

}

void printResult(stNumbers Numbers) {

	cout << "Agerage = " << avgNumbers(Numbers) << endl;

	if (checkResult(avgNumbers(Numbers)) == enPassFial::pass)
		cout << "You are Pass\n";
	else
		cout << "you are Fail\n";

}

int main() {

	printResult(readNumbers());


	return 0;
}

