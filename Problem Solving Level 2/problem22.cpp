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

int readArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i+1 << "] : ";
		cin >> arr[i];
	}
	return arr[100];
}

void printArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++) 
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int howManyRepeated(int arr[100], int arrLength, int numToCheck)
{
	int count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (numToCheck == arr[i]) {
			count++;
		}
	}
	return count;
}

int main() {
	
	int arr[100];

	short arrLength = readPositiveNumber("enter number of elements:");

	readArray(arr, arrLength);

	short numberToCheck = readPositiveNumber("enter the number you want to check:");

	cout << "Original Array: ";
	printArray(arr, arrLength);
	cout << numberToCheck << " is repeated " << howManyRepeated(arr, arrLength, numberToCheck) << endl;


	


	return 0;
}