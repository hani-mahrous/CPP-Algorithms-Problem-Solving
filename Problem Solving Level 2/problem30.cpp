#include <iostream>
#include <string>
using namespace std;


enum enPrimOrNot { Prime = 1, NotPrime = 2 };

enPrimOrNot CheckPrime(int number)
{
	int M = round(number / 2);

	for (int i = 2; i <= M; i++)
	{
		if (number % i == 0)
		{
			return enPrimOrNot::NotPrime;
		}
	}

	return enPrimOrNot::Prime;
}

int readPositiveNumber(string msg)
{
	int number = 0;

	do {

		cout << msg << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}

int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

void fillArrayWithRandomNumbers(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {
		arr[i] = randomNumber(1, 100);
	}
}

void printArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}


void sumOfArrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) 
{
	for (int i = 0; i < arrLength; i++) 
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}

int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arr2[100];

	short arrLength = readPositiveNumber("Enter number of array elements:");

	fillArrayWithRandomNumbers(arr1, arrLength);
	fillArrayWithRandomNumbers(arr2, arrLength);

	int arrSum[100];

	sumOfArrays(arr1, arr2, arrSum, arrLength);

	cout << "\nArray 1: \n";
	printArray(arr1, arrLength);

	cout << "\nArray 2: \n";
	printArray(arr2, arrLength);

	cout << "\nSum of array1 and array2 elements: \n";
	printArray(arrSum, arrLength);


	

	return 0;
}



