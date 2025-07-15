#include <iostream>
using namespace std;

int readNumber() {
	int num;
	cout << "Enter Number : \n";
	cin >> num;
	return num;
}

void printRangeFrom1toN(int x) {

	for (int i = 1; i <= x; i++) {

		cout << i << endl;

	}

}



int main() {

	int number = readNumber();

	printRangeFrom1toN(number);



	return 0;
}