#include <iostream>
#include <cmath>
using namespace std;


void readNums(float& a, float& d) {

	cout << "Enter Hight: \n";
	cin >> a;
	cout << "Enter diagonal: \n";
	cin >> d;
}

double rectangleArreaCalc(float& a, float& d) {

	double area = a * sqrt(pow(d, 2) - pow(a, 2) ) ;
	return area;

}

void printResult(float area) {
	cout << "Rectangle Area = " << area;
}

int main() {

	float a, d;

	readNums(a, d);
	printResult(rectangleArreaCalc(a, d));



	return 0;
}