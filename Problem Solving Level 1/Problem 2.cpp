#include <iostream>
#include <string>
using namespace std;

string readName() {

	string name;

	cout << "Enter Your Name:\n";
	getline(cin, name);

	return name;
}

void printName(string name) {

	cout << "Your Name is : " << name << endl;

}



int main() {
	
	printName(readName());

	return 0;
}