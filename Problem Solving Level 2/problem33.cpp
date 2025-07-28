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

enum  enCharType
{
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialCharacter = 3,
	Digit = 4
};

int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

char chooseRandomType(enCharType charType)
{
	switch (charType)
	{
	case SmallLetter:
		return char(randomNumber(97, 122));

	case CapitalLetter:
		return char(randomNumber(65, 90));

	case SpecialCharacter:
		return char(randomNumber(33, 47));

	case Digit:
		return char(randomNumber(48, 57));

	default:
		break;
	}
}

string generateSlot(enCharType charType, short length)
{
	string slot = "";
	for (int i = 1; i <= length; i++) 
	{
		slot += chooseRandomType(charType);
	}
	return slot;
}

string generateKey() 
{
	string key = "";
	key = generateSlot(enCharType::CapitalLetter, 4) + "-";
	key += generateSlot(enCharType::CapitalLetter, 4) + "-";
	key += generateSlot(enCharType::CapitalLetter, 4) + "-";
	key += generateSlot(enCharType::CapitalLetter, 4);
	return key;
}

void fillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++) {
		arr[i] = generateKey();
	}
}

void printArray(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++) 
	{
		cout << "Array [" << i << "] : " << arr[i] << endl;
	}
	cout << endl;
}


int main() {

	srand((unsigned)time(NULL));

	string arr[100];

	short arrLength = readPositiveNumber("How many keys do you want to generate? : ");

	fillArrayWithKeys(arr, arrLength);

	cout << "\nArray elements:\n\n";
	printArray(arr, arrLength);

	return 0;
}






	
