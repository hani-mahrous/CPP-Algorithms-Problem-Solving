#include <iostream>
#include <string>
using namespace std;

float readNumber(string msg) {

	float num;
	cout << msg << endl;
	cin >> num;
	return num;

}

int clacSum() {

	int sum = 0 , num = 0 , counter = 1;

	do {

		num = readNumber("Enter Number" + to_string(counter) );

		if (num == -99) {
			break;
		}

		sum += num;
		counter++;

	} while (num != -99);


	return sum;
}


int main() {


	cout << "Result = " << clacSum() << endl;



	return 0;
}