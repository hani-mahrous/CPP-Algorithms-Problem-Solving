#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

void readNumber(float& squareSide) {

	cout << "Enter Square Side: \n";
	cin >> squareSide;

}

double circleArreaCalc(float& squareSide) {

	double area = ::pi * pow(squareSide / 2 , 2) ;
	return area;

}

void printResult(float area) {

	cout << "Circle Area = " << area;

}

int main() {

	float squareSide;

	readNumber(squareSide);
	printResult(circleArreaCalc(squareSide));



	return 0;
}