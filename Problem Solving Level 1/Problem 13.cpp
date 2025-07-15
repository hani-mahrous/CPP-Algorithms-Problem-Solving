#include <iostream>
using namespace std;

struct stNumbers {
	int num1;
	int num2;
	int num3;
};

stNumbers readNumbers() {

	stNumbers Numbers;
	cout << "Enter number 1: \n";
	cin >> Numbers.num1;
	cout << "Enter number 2: \n";
	cin >> Numbers.num2;
	cout << "Enter number 3: \n";
	cin >> Numbers.num3;

	return Numbers;
}

int maxOfNum(stNumbers Numbers) {

	if (Numbers.num1 > Numbers.num2) {

		if (Numbers.num1 > Numbers.num3) 
			return Numbers.num1;
		else
			return Numbers.num3;

	}
	else 
	{

		if (Numbers.num2 > Numbers.num3)
			return Numbers.num2;
		else
			return Numbers.num3;

	}
}

void printResult(stNumbers Numbers) {

	cout << "The bigger number is: " << maxOfNum(Numbers);

}



int main() {

	printResult(readNumbers());

	return 0;
}