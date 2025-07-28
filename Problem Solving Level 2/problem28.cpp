#include <iostream>
#include <string>
using namespace std;

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


void copyArray(int oldArr[100], int newArr[100], int arrLength) 
{
	for (int i = 0; i < arrLength; i++) 
	{
		newArr[i] = oldArr[i];
	}
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100];

	short arrLength = readPositiveNumber("Enter number of array elements:");

	fillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 :" << endl;
	printArray(arr, arrLength);

	
	int arr2[100];

	copyArray(arr, arr2, arrLength);

	cout << "\nArray 2 after copy:" << endl;
	printArray(arr2, arrLength);




	return 0;
}



