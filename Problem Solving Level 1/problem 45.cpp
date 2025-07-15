#include <iostream>
using namespace std;

enum enMonths { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12 };

int readNumberInRage(string msg, int from, int to) {
	int num;
	do {
		cout << msg << endl;
		cin >> num;
	} while (num < from || num > to);
	return num;
}

enMonths convertToEnum(int num) {
	return (enMonths)num;
}

string whichDay(enMonths Day) {

	switch (Day)
	{
	case enMonths::Jan:
		return "January";
	case enMonths::Feb:
		return "February";
	case enMonths::Mar:
		return "March";
	case enMonths::Apr:
		return "April";
	case enMonths::May:
		return "May";
	case enMonths::Jun:
		return "June";
	case enMonths::Jul:
		return "July";
	case enMonths::Aug:
		return "August";
	case enMonths::Sep:
		return "September";
	case enMonths::Oct:
		return "October";
	case enMonths::Nov:
		return "November";
	case enMonths::Dec:
		return "December";
	default:
		return "Wrong Month";
	}

}

int main() {

	int day = readNumberInRage("Enter a Month Of Day 1-12 : ", 1, 12);

	cout << whichDay(convertToEnum(day)) << endl;

	return 0;
}