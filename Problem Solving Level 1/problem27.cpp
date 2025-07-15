#include <iostream>
using namespace std;

int readNumber() {
	int num;
	cout << "Enter Number : \n";
	cin >> num;
	return num;
}

void printRangeFromNto1(int x) {

	for (int i = x; i >= 1; i--) {
		cout << i << endl;
	}

}



int main() {

	printRangeFromNto1(readNumber());



	return 0;
}