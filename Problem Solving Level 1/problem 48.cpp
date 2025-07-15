#include <iostream>
using namespace std;

float readNumber(string msg) {
	float num;
	cout << msg << endl;
	cin >> num;
	return num;
}

float calcMonths(float loanAmount, float months) {
	return loanAmount / months;
}

int main() {

	float loanAmount = readNumber("Enter Loan Amount: ");
	float monthlyPayment = readNumber("Enter How many Months: ");
	cout << calcMonths(loanAmount, monthlyPayment) << "$ Every Month" << endl;

	return 0;
}