#include <iostream>
using namespace std;

int readNumber() {
	int num;
	cout << "Enter Number : \n";
	cin >> num;
	return num;
}

bool isOdd(int num) {

	return (num % 2 != 0);

}

void sumOddNumbersFrom1toN(int x) {

	int total = 0;

	for (int i = 1; i <= x; i++) {

		if (isOdd(i)) {
			total += i;
		}

	}

	cout << "Total Odd is: " << total << endl;

}



int main() {

	sumOddNumbersFrom1toN(readNumber());



	return 0;
}