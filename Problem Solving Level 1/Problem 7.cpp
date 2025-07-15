#include <iostream>
#include <string>
using namespace std;

int readNumber() {

	int num = 0;
	cout << "Enter a Number: \n";
	cin >> num;
	return num;

}

float getHalfNumber(int num) {

	return (float)num / 2;

}

void printResult(int num) {

	string result = "Half of: " + to_string(num) + " is " + to_string( getHalfNumber(num) );
	cout << result << endl;
}

int main() {
	
	printResult( readNumber() );

	return 0;
}