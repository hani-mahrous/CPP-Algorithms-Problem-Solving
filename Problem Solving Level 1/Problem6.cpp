#include <iostream>
using namespace std;

struct stinfo {
	string firstName;
	string lastName;
};

stinfo readInfo() {

	stinfo Info;
	cout << "Enter First Name: \n";
	cin >> Info.firstName;
	cout << "Enter Last Name: \n";
	cin >> Info.lastName;

	return Info;
}

string getFullName(stinfo Info) {

	string fullName;
	fullName = Info.firstName + " " + Info.lastName;
	return fullName;

}

void printFullName(string fullName) {

	cout << "Your Name is: " << fullName;

}

int main() {

	printFullName( getFullName(readInfo()) );

	return 0;
}
