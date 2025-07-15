#include <iostream>
using namespace std;

struct stNumbers {
	int num1;
	int num2;
};

stNumbers readNumbers() {

	stNumbers Numbers;

	cout << "Enter Number 1: \n";
	cin >> Numbers.num1;
	cout << "Enter Number 2: \n";
	cin >> Numbers.num2;

	return Numbers;
}

int maxOfNum(stNumbers Numbers) {

	if (Numbers.num1 > Numbers.num2)
		return Numbers.num1;
	else
		return Numbers.num2;

}

void printResult(stNumbers Numbers) {

	cout << "The bigger number is: " << maxOfNum(Numbers);

}



int main() {

	printResult( readNumbers() );
	
	return 0;
}