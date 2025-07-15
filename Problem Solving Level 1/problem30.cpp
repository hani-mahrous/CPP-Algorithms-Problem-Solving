#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
	int num;

	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0 );
	
	return num;
}

int factorial(int num) {

	int total = 1;

	for (int i = num ; i >= 1; i--) {

		total *= i;

	}

	return total;
}

void printResult(int total) {
	
	cout << "Total is: " << total << endl;
}



int main() {
	
	printResult( factorial( readPositiveNumber("Enter Positive Number: ") ) );


	return 0;
}