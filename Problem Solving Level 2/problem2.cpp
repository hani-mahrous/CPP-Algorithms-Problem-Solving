#include <iostream>

using namespace std;

enum enPrimeOrNot { Prime = 1  , NotPrime = 2};

int readPositiveNumber(string msg) 
{
	int number = 0;

	do {

		cout << msg << endl;
		cin >> number;

	} while (number <=0);

	return number;
}

enPrimeOrNot checkIfPrime(int number) 
{

	int M = round(number / 2);

	for (int i = 2; i <= M; i++) {

		if (number % i == 0) {
			return enPrimeOrNot::NotPrime;
		}

	}

	return enPrimeOrNot::Prime;

}

void printPrimeNumberFrom1ToN(int number)
{
	cout << "\nPrime Numbers from " << 1 << " To " << number << " are : " << endl;

	for (int i = 1; i <= number;i++) 
	{
		if (checkIfPrime(i) == enPrimeOrNot::Prime) 
		{
			cout << i << endl;
		}
	}


}


int main() {



	int number = readPositiveNumber("Enter Number: ");
	
	printPrimeNumberFrom1ToN(number);
	

	


	return 0;
}