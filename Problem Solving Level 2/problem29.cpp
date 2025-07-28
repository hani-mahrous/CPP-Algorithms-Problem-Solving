#include <iostream>
#include <string>
using namespace std;

enum enPrimOrNot { Prime = 1, NotPrime = 2 };

enPrimOrNot CheckPrime(int number)
{
    int M = round(number / 2);
    
    for (int i = 2; i <= M; i++)
    {
		if (number % i == 0) 
		{
            return enPrimOrNot::NotPrime; 
		}
    }
    
    return enPrimOrNot::Prime;
}

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


void copyOnlyPrimaryNumbers(int arr1[100], int arr2[100], int arrLength, int& arr2Length) 
{
	int counter = 0;

	for (int i = 0; i < arrLength; i++) 
	{
		if ( CheckPrime(arr1[i]) == enPrimOrNot::Prime)
		{
			arr2[counter] = arr1[i];
			counter++;
		}

	}

	arr2Length = counter - 1;
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100];

	short arrLength = readPositiveNumber("Enter number of array elements:");

	fillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 :" << endl;
	printArray(arr, arrLength);


	int arr2[100], arr2Length = 0;

	copyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Length);


	cout << "\nPrime Numbers in Array2:" << endl;
	printArray(arr2, arr2Length);




	return 0;
}



