#include <iostream>
using namespace std;

enum enPassFail { pass = 1, fail = 2 };

int readMark() {

	int mark = 0;
	cout << "Enter your mark: \n";
	cin >> mark;
	return mark;

}

enPassFail checkMark(int mark) {

	if (mark >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;

}

void printResult(int mark) {

	if (checkMark(mark) == enPassFail::pass)
		cout << "Pass\n";
	else
		cout << "Fail\n";

}

int main() {

	printResult(readMark());


	return 0;
}
