#include <iostream>
#include <string>
using namespace std;

void printArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

bool isPalindrome(int arrSrc[100], int arrLength) 
{
	for (int i = 0; i < arrLength; i++) 
	{
		if (arrSrc[i] != arrSrc[arrLength - i -1]) 
		{
			return false;
		}
	}

	return true;
}

int main() {

	srand((unsigned)time(NULL));

	int arr[100] = { 10,20,30,30,20,10 };

	cout << "\nArray Elements:\n";
	printArray(arr, 6);


	if (isPalindrome(arr,6)) 
	{
		cout << "\nYes array is Palindrome\n";
	}
	else
	{
		cout << "\nNO array is NOT Palindrome\n";
	}


	return 0;
}



