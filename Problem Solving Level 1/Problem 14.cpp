#include <iostream>
using namespace std;

void readNums(int& num1, int& num2) {

	cout << "Enter Number 1: \n";
	cin >> num1;
	cout << "Enter Number 2: \n";
	cin >> num2;

}

void printNumsBefore(int num1, int num2) {

	cout << "Before Swap ******************** " << endl;
	cout << "Number 1 = " << num1 << endl;
	cout << "Number 2 = " << num2 << endl;
}

void printNumsAfter(int num1, int num2) {

	cout << "After Swap ******************** " << endl;
	cout << "Number 1 = " << num1 << endl;
	cout << "Number 2 = " << num2 << endl;
}

void swapNums(int& num1, int& num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

}

int main() {

	int num1, num2;

	readNums(num1, num2);
	printNumsBefore(num1, num2);
	swapNums(num1, num2);
	printNumsAfter(num1, num2);


	return 0;
}