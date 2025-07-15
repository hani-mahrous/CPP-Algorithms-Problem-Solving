#include <iostream>
using namespace std;

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

void printResult(stNumbers Numbers) {

	cout << "Result = " << sumNumbers(Numbers) <<endl;

}

int main() {
	
	printResult(readNumbers());


	return 0;
}