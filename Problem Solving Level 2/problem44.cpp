#include <iostream>
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
		arr[i] = randomNumber(-100, 100);
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


bool isPositive(int num) 
{
	return (num >= 0);
}


int positiveCount(int arrSrc[100], int arrLength)
{
	short counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (isPositive(arrSrc[i]))
		{
			counter++;
		}
	}
	return counter;
}


int main() {

	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = readPositiveNumber("Enter number of array elements:");

	fillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray Elements: ";
	printArray(arr, arrLength);

	cout << "\nPositive Numbers count is: " << positiveCount(arr, arrLength) << endl;





	return 0;
}



