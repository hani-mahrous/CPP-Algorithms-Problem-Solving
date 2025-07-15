#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

void readNumber(float& diameter) {

	cout << "Enter Diameter: \n";
	cin >> diameter;

}

double circleArreaCalc(float diameter) {

	double area = ( ::pi * pow(diameter, 2) ) / 4;
	return area;

}

void printResult(float area) {

	cout << "Circle Area = " << area;

}



int main() {

	float diameter;

	readNumber(diameter);
	printResult(circleArreaCalc(diameter));



	return 0;
}