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


bool isEven(int num) {
	return (num % 2 == 0);
}


int evenCount(int arrSrc[100], int arrLength)
{
	short counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (isEven(arrSrc[i]))
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

	cout << "\nEven Numbers count is: " << evenCount(arr, arrLength) << endl;



	return 0;
}



