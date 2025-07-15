#include <iostream>
#include <string>
using namespace std;

float readPositiveNumber(string message) {

	float num;

	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);

	return num;
}

float totalBillAfterTax(float totalBill) {

	totalBill = totalBill * 1.1;
	totalBill = totalBill * 1.16;

	return totalBill;
}

float Tax16(float billValue) {
	return billValue * 1.16;
}


int main() {

	float totalBill = readPositiveNumber("Enter Total Bill: ");

	cout << "Total Bill= " << totalBill << endl;

	cout << "Total Bill After Service Fee and Sales Tax = " << totalBillAfterTax(totalBill)  << endl;



	return 0;
}