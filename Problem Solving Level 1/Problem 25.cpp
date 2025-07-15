#include <iostream>
using namespace std;

int readAge() {
	int age;
	cout << "Enter your age between 18:45 : \n";
	cin >> age;
	return age;
}

bool validateNumberInRage(int num, int from, int to) {

	return (num >= from && num <= to);

}

int validateNumberUntil(int from, int to) {

	int age = 0;

	do {

		age = readAge();

	} while (!validateNumberInRage(age, from, to));
	
	return age;
}

void printResult(int age) {

	cout << "Your age is: " << age << endl;

}

int main() {

	printResult(validateNumberUntil(18,45));



	return 0;
}