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

float clacRemain(float totalBill, float cashPaid) {

	return cashPaid - totalBill;
}


int main() {

	float totalBill = readPositiveNumber("Enter Total Bill: ");
	float cashPaid = readPositiveNumber("Enter Cash Paid: ");

	cout << "Total Bill = " << totalBill << endl;
	cout << "Cash Paid  = " << cashPaid << endl;
	cout << "***************************\n";
	cout << "Remain = " << clacRemain( totalBill, cashPaid) << endl;



	return 0;
}