#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

void readNums(float& a, float& b) {
	cout << "Enter a: \n";
	cin >> a;
	cout << "Enter b: \n";
	cin >> b;
}

float circleArreaCalc(float& a, float& b) {

	float area = ::pi * (pow(b, 2) / 4) * (  (2*a - b) / (2*a + b) );
	return area;

}

void printResult(float area) {

	cout << "Circle Area = " << area;

}

int main() {
	float a,b;

	readNums(a,b);
	printResult(circleArreaCalc(a,b));



	return 0;
}