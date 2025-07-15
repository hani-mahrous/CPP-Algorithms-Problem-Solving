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

	do {
		pinCode = readNumber("Enter Your PIN Code: ");

		if (pinCode == "1234") {
			return 1;
		}
		else
		{
			cout << "Wrong Pin Code\n";
			system("color 4F");
		}

	} while (pinCode != "1234");

	return 0;

}

int main() {

	if (logIn()) {
		system("color 2F");
		cout << "Your Balanc = 7500" << endl;
	}

	return 0;
}