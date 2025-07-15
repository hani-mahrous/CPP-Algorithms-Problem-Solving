#include <iostream>
using namespace std;

int readAge() {
	int age;
	cout << "Enter your age: \n";
	cin >> age;
	return age;
}


// General function
bool validateNumberInRage(int num, int from, int to) {

	return (num >= from && num <= to);

}

void printResult(int age) {

	if (validateNumberInRage(age, 18, 45) ){
		cout << age << "is a Valid Age\n";
	}
	else
	{
		cout << age << "is inValid Age\n";
	}

}



int main() {
	
	printResult( readAge() );



	return 0;
}