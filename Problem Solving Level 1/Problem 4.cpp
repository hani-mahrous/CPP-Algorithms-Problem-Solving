#include <iostream>
using namespace std;

struct stInfo
{
	int age;
	bool hasDrivingLicense;
};

stInfo readInfo() {

	stInfo info;

	cout << "Enter your age:\n";
	cin >> info.age;

	cout << "Do you have a Driver License?\n";
	cout << "1 yes\n";
	cout << "0 no\n";
	cin >> info.hasDrivingLicense;

	return info;
}

bool isAccepted(stInfo info) {

	return (info.age > 21 && info.hasDrivingLicense == 1);

}

void printResult( stInfo info ) {

	if (isAccepted(info)) 
	{
		cout << "Hired\n";
	}
	else
	{
		cout << "Rejected\n";
	}

}



int main() {
	
	printResult(readInfo());
	

	return 0;
}