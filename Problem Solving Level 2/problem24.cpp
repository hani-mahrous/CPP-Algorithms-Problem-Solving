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

int findMaxNumberInArray(int arrName[100], int arrLength)
{
	int maxNumber = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arrName[i] > maxNumber) 
		{
			maxNumber = arrName[i];
		}
	}
	return maxNumber;
}


int main() 
{

	srand((unsigned)time(NULL));

	int arr[100];

	short arrLength = readPositiveNumber("Enter number of array elements:");

	fillArrayWithRandomNumbers(arr, arrLength);

	printArray(arr, arrLength);

	cout << "Max Number is: " << findMaxNumberInArray(arr, arrLength) << endl;



	return 0;
}