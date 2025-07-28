#include <iostream>
#include <string>
using namespace std;


int readNumber()
{
	int number = 0;
	cout << "Enter a number: " << endl;
	cin >> number;
	return number;
}

void addArrayElement(int number, int arr[100], short& arrLength)
{
	arr[arrLength] = number;
	arrLength++;
}

void fillArray(int arr[100], short& arrLength) 
{
	bool addMore;

	do {
		addArrayElement( readNumber() , arr, arrLength);

		cout << "\nDo you want to add more numbers? [0]:No / [1]:yes? : ";
		cin >> addMore;

	} while (addMore);

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

	int arr[100];
	short arrLength = 0;

	fillArray(arr, arrLength);

	cout << "\nArray Length: " << arrLength << endl;
	cout << "\nArray Elements: \n";
	printArray(arr, arrLength);




	return 0;
}



