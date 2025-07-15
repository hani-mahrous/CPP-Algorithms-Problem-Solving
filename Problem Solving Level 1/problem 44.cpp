#include <iostream>
using namespace std;

enum enDays{ Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Satrday = 7};

int readNumberInRage(string msg, int from, int to) {
	int num;
	do {
		cout << msg << endl;
		cin >> num;
	} while (num < from || num > to);
	return num;
}

enDays convertToEnum(int num) {
	return (enDays)num;
}

string getDay(enDays Day) {

	switch (Day)
	{
	case Sunday:
		return "Sunday";
	case Monday: 
		return "Monday";
	case Tuesday: 
		return "Tuesday";
	case Wednesday: 
		return "Wednesday";
	case Thursday: 
		return "Thursday";
	case Friday: 
		return "Friday";
	case Satrday: 
		return "Satrday";
	default: 
		return "Wrong Day";
	}
	
}

int main() {

	int day = readNumberInRage("Enter Number Of Day 1-7 : ", 1,7);

 	cout << getDay(convertToEnum(day)) << endl;

	return 0;
}