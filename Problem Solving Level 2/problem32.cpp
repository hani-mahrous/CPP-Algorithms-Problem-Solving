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

void printArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void fillArrayWithRandomNumbers(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {
		arr[i] = randomNumber(1, 100);
	}
}


void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void copyArrayInReverseOrder(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength / 2; i++) 
	{
		swap(arr[i], arr[arrLength - 1 - i]);
	}
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100];

	short arrLength = readPositiveNumber("Enter number of array elements:");

	fillArrayWithRandomNumbers(arr, arrLength);


	cout << "\nArray 1 elements: \n";
	printArray(arr, arrLength);


	copyArrayInReverseOrder(arr, arrLength);

	cout << "\nArray 2 elements after copy: \n";
	printArray(arr, arrLength);




	return 0;
}



