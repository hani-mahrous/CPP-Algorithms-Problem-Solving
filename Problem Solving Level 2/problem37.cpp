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

void fillArrayWithRandomNumbers(int arr[100], int arrLength) 
{

	for (int i = 0; i < arrLength; i++) 
	{
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


void addArrayElement(int number, int arr[100], int& arrLength)
{
	arr[arrLength] = number;
	arrLength++;
}


void copyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
	for (int i = 0; i < arrLength; i++) 
	{
		addArrayElement(arrSource[i], arrDestination, arr2Length);
	}
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100], arr2[100];
	int arrLength = readPositiveNumber("Enter number of elements:");
	int arr2Length = 0;

	fillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray 1 elements:\n";
	printArray(arr, arrLength);


	copyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);
	cout << "\nArray 2 elements after copy:\n";
	printArray(arr2, arr2Length);




	return 0;
}



