#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

void readNums(float& a, float& b, float& c) {
	cout << "Enter a: \n";
	cin >> a;
	cout << "Enter b: \n";
	cin >> b;
	cout << "Enter c: \n";
	cin >> c;
}

float circleArreaCalc(float& a, float& b, float& c) {

	float p = (a + b + c) / 2;
	float z = (a * b * c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c)) );
	float area = ::pi * pow( z, 2);
	return area;

}

void printResult(float area) {

	cout << "Circle Area = " << area << endl;

}

int main() {
	float a, b, c;

	readNums(a, b, c);
	printResult(circleArreaCalc(a, b, c));



	return 0;
}