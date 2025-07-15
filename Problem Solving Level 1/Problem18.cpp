#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

void readNumber(float& radious) {

	cout << "Enter Radious: \n";
	cin >> radious;

}

double circleArreaCalc(float& radious) {

	double area = ::pi * pow(radious, 2);
	return area;

}

void printResult(float area) {
	cout << "Circle Area = " << area;
}

int main() {

	float radious;

	readNumber(radious);

	printResult(circleArreaCalc(radious));



	return 0;
}