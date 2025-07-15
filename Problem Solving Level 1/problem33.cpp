#include <iostream>
using namespace std;

int readGrade() {

	int grade;

	do {
		cout << "Enter a Grade 0 - 100 : \n";
		cin >> grade;
	} while (grade > 100 || grade < 0);

	return grade;
}

char result(int grade) {

	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}


void printResult(char grade) {
	cout << "Your Grade = " << grade << endl;
}

int main() {
	
	printResult( result( readGrade() ) );

	return 0;
}