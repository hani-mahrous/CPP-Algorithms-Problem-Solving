#include <iostream>
#include <string>
using namespace std;


int readPositiveNumber(string message) {
	int num;

	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);

	return num;
}

bool isPrime(int num) {

	int m = round(num / 2);

	for (int i = 2; i <= m; i++) {
		
		if (num % i == 0) {
			return false;
		}

	}

	return true;

}


void printNumberType(int num) {

	if ( isPrime(num) ) {
		cout << "The Number is Prime\n";
	}
	else
	{
		cout << "The Number is Not Prime\n";
	}
}


int main() {


	printNumberType( readPositiveNumber("Enter a Positive Number: ") );



	return 0;
}