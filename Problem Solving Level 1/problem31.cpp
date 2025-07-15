#include <iostream>
using namespace std;

int readNumber() {

	int num;
	cout << "Enter a Number: \n";
	cin >> num;
	return num;

}

int powerTwo(int num) {
	return num * num;
}

int powerThree(int num) {
	return num * num * num;
}

int powerFour(int num) {
	return num * num * num * num;
}

void printResult(int num) {
	cout << num << endl;
}

int main() {

	int num = readNumber();
	printResult(powerTwo(num));
	printResult(powerThree(num));
	printResult(powerFour(num));



	return 0;
}