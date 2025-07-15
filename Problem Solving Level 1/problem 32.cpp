#include <iostream>
using namespace std;

int readNumber() {

	int num;
	cout << "Enter a Number: \n";
	cin >> num;
	return num;

}

int readPower() {

	int pow;
	cout << "Enter Power: \n";
	cin >> pow;
	return pow;

}

int powerFunc(int num, int power) {

	int result = 1;

	if (power == 0) {
		return result;
	}
	
	for (int i = 1; i <= power; i++) {
		result *= num;
	}

	return result;
	
}


void printResult(int num) {
	cout << num << endl;
}

int main() {


	int num = readNumber();
	int pow = readPower();

	printResult(powerFunc(num,pow));



	return 0;
}