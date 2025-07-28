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


void fillArrayWith1toN(int arrName[100], int arrLength) 
{
	for (int i = 0; i < arrLength; i++) 
	{
		arrName[i] = i+1;
	}
}


void swap(int& a, int& b) 
{
	int temp = a;
	a = b;
	b = temp;
}

void shuffelArray(int arr[100], int arrLength) 
{
	int index1 , index2;

	for (int i = 0; i < arrLength ; i++) 
	{
		index1 = randomNumber(1, arrLength) - 1;
		index2 = randomNumber(1, arrLength) - 1;

		swap( arr[index1], arr[index2] );
	}
}

int main() 
{

	srand((unsigned)time(NULL));

	int arr[100];

	short arrLength = readPositiveNumber("Enter number of array elements:");

	fillArrayWith1toN(arr, arrLength);


	cout << "\nArray elements before shuffle: \n";
	printArray(arr, arrLength);


	shuffelArray(arr, arrLength);

	cout << "\nArray elements after shuffle: \n";
	printArray(arr, arrLength);


	

	return 0;
}



