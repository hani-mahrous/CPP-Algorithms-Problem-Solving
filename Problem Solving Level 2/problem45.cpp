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


bool isNegative(int num)
{
	return (num < 0);
}


int negativeCount(int arrSrc[100], int arrLength)
{
	short counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (isNegative(arrSrc[i]))
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

	cout << "\nNegative Numbers count is: " << negativeCount(arr, arrLength) << endl;




	return 0;
}



