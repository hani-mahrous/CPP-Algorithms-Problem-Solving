#include <iostream>
#include <string>
using namespace std;

float readNumber(string msg) {
	float num;
	cout << msg << endl;
	cin >> num;
	return num;
}

float calcDays(float hours) {
	return hours / 24;
}

float calcWeeks(float days) {
	return days / 24 / 7;
}


int main() {

	float numberOfHours = readNumber("Enter Hours: ");

	float numberOfDays = calcDays(numberOfHours);
	float numberOfWeeks = calcWeeks(numberOfHours);

	cout << "Days = " << numberOfDays << endl;
	cout << "Weeks = " << numberOfWeeks << endl;



	return 0;
}