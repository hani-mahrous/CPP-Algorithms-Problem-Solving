#include <iostream>
using namespace std;

int readNumber() {
	int num;
	cout << "Enter Number : \n";
	cin >> num;
	return num;
}

bool isEven(int num) {

	return (num % 2 == 0);

}

void sumEvenNumbersFrom1toN(int x) {

	int total = 0;

	for (int i = 1; i <= x; i++) {
		if (isEven(i)) {
			total += i;
		}
	}

	cout << "Total Even is: " << total << endl;
}



int main() {

	sumEvenNumbersFrom1toN(readNumber());



	return 0;
}