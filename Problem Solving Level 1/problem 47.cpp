#include <iostream>
using namespace std;

float readNumber(string msg) {
	float num;
	cout << msg << endl;
	cin >> num;
	return num;
}

float calcMonths(float loanAmount, float monthlyPayment) {
	return loanAmount / monthlyPayment;
}

int main() {

	float loanAmount = readNumber("Enter Loan Amount: ");
	float monthlyPayment = readNumber("Enter Monthly Payment: ");
	cout << calcMonths(loanAmount, monthlyPayment) << " Months" << endl;

	return 0;
}