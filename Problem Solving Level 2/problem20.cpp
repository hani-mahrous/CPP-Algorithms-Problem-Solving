#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

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
		return char(randomNumber(97, 122) );

	case CapitalLetter:
		return char(randomNumber(65, 90)  );

	case SpecialCharacter:
		return char(randomNumber(33, 47)  );

	case Digit:
		return char(randomNumber(48, 57)  );

	default:
		break;
	}

}

int main() 
{

	srand((unsigned)time(NULL));

	cout << "Small Letter: "		<< chooseRandomType(enCharType::SmallLetter) << endl;
	cout << "Capital Letter: "		<< chooseRandomType(enCharType::CapitalLetter) << endl;
	cout << "Special Character: "	<< chooseRandomType(enCharType::SpecialCharacter) << endl;
	cout << "Digit: "				<< chooseRandomType(enCharType::Digit) << endl;



	return 0;
}