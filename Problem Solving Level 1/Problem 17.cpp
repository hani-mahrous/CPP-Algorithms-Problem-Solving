#include <iostream>
#include <cmath>
using namespace std;


void readNums(float& base, float& height) {

	cout << "Enter Triangle base: \n";
	cin >> base;
	cout << "Enter Triangle Height: \n";
	cin >> height;

}

double TriangleArreaCalc(float& base, float& height) {

	double area = (base / 2) * height;
	return area;

}

void printAreaResult(float area) {
	cout << "Triangle Area = " << area;
}

int main() {

	float base, height;

	readNums(base, height);
	printAreaResult(TriangleArreaCalc(base, height));



	return 0;
}