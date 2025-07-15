#include <iostream>
using namespace std;

string readNumber(string msg) {
	string PIN;
	cout << msg << endl;
	cin >> PIN;
	return PIN;
}

bool logIn() {

	string pinCode;

	int tryNum = 3;

	do{

		tryNum -= 1;

		pinCode = readNumber("Enter Your PIN Code : ");

		if (pinCode == "1234") {
			return 1;
		}
		else
		{
			cout << "Wrong Pin, you have " << tryNum << " more times\n";
			system("color 4F");
		}

	} while (pinCode != "1234" && tryNum > 0 );

	return 0;
}



int main() {

	if (logIn()) {
		system("color 2F");
		cout << "Your Balanc = 7500" << endl;
	}
	else
	{
		cout << "Your Card is Locked\n";
	}

	return 0;
}