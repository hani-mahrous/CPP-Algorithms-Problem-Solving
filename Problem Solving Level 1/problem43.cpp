#include <iostream>
#include <string>
using namespace std;

struct stDuration {
	float Days, Hours, Minutes, Seconds;
};

float readNumber(string msg) {
	float num;
	cout << msg << endl;
	cin >> num;
	return num;
}


stDuration clacDuration(int totalSeconds) {

	stDuration Duration;

	const int secondsPerDay = 24 * 60 * 60;
	const int secondsPerHour = 60 * 60;
	const int secondsPerMinute = 60;
	int remainder = 0;

	Duration.Days = floor(totalSeconds / secondsPerDay);
	remainder = totalSeconds % secondsPerDay;

	Duration.Hours = floor(remainder / secondsPerHour);
	remainder = remainder % secondsPerHour;

	Duration.Minutes = floor(remainder / secondsPerMinute);
	remainder = remainder % secondsPerMinute;

	Duration.Seconds = remainder;

	return Duration;
}

void printDuration(stDuration Duration){

	cout << "Duration = " 
		<< Duration.Days 
		<< ":" << Duration.Hours 
		<< ":" << Duration.Minutes 
		<< ":" << Duration.Seconds 
		<< endl;
}

int main() {

	int totalSeconds = readNumber("Enter Seconds: ");

	printDuration( clacDuration(totalSeconds) );

	return 0;
}