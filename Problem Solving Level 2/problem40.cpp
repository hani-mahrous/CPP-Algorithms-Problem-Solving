#include <iostream>
using namespace std;

void addArrayElement(int number, int arr[100], int& arrLength)
{
	arr[arrLength] = number;
	arrLength++;
}

bool isRepeated(int arrDist[100], int arr2Length, int num) 
{
	bool repeated = false;

	for (int i = 0; i < arr2Length; i++) 
	{
		if (num == arrDist[i]) 
		{
			repeated =  true;
		}
	}

	return repeated;
}

void copyDistinctNumbersToArray(int arrSrc[100], int arrDist[100], int arrLength, int& arr2Length)
{
	for (int i = 0; i < arrLength; i++) 
	{
		if (!isRepeated(arrDist, arr2Length, arrSrc[i])) 
		{
			addArrayElement(arrSrc[i], arrDist, arr2Length);
		} 

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


int main() {

	srand((unsigned)time(NULL));

	int arr1[100] = {10,10,10,50,50,70,70,70,70,90};
	int arr2[100];
	int arr2Length = 0;

	cout << "\nArray 1: \n";
	printArray(arr1, 10);

	copyDistinctNumbersToArray(arr1, arr2, 10, arr2Length);
	cout << "\nArray 2: \n";
	printArray(arr2, arr2Length);




	return 0;
}



