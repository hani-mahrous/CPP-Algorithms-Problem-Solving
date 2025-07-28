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

int findNumberPositionInArray(int arrName[100], int arrLength, int numToFind)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (numToFind == arrName[i])
		{
			return i;
		}
	}
	return -1;
}

bool isNumberInArray(int arr[100], int arrLength, int numToFind) 
{
	return findNumberPositionInArray(arr, arrLength, numToFind) != -1;
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100];

	short arrLength = readPositiveNumber("enter number of array elements:");

	fillArrayWithRandomNumbers(arr, arrLength);


	cout << "\nArray 1 elements:\n";
	printArray(arr, arrLength);


	short numberToFind = readPositiveNumber("\nEnter number that you want to find:");
	cout << "\nNumber you are looking for is: " << numberToFind << endl;

	int numberIndex = findNumberPositionInArray(arr, arrLength, numberToFind);

	if (isNumberInArray(arr, arrLength, numberToFind) ) 
	{
		cout << "Yes it is found :-)\n";
	}
	else
	{
		cout << "No, The number is not found :-(\n";
	}



	return 0;
}



