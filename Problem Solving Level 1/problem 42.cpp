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

stDuration readDuration() {
	stDuration Duration;

	Duration.Days = readNumber("Enter Days: ");
	Duration.Hours = readNumber("Enter Hours: ");
	Duration.Minutes = readNumber("Enter Minutes: ");
	Duration.Seconds = readNumber("Enter Seconds: ");
	
	return Duration;
}

float clacSeconds(stDuration Duration) {
	float durationInSeconds = 0;

	durationInSeconds = Duration.Days * 24 * 60 * 60;
	durationInSeconds += Duration.Hours * 60 * 60;
	durationInSeconds += Duration.Minutes * 60;
	durationInSeconds += Duration.Seconds;

	return durationInSeconds;
}


int main() {

	cout << "Seconds = " << clacSeconds( readDuration() ) << endl;



	return 0;
}