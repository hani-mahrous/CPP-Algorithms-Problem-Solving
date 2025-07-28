#include <iostream>
#include <cstdlib>
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

void generateKeys(int num)
{

	for (int i = 1; i <= num; i++) {
		cout << "Key [" << i << "] : " << generateKey() << endl;
	}

}

int main() {

	srand((unsigned)time(NULL));

	generateKeys(readPositiveNumber("enter number of keys"));



	return 0;
}