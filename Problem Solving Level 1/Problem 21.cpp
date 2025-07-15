#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.14;

float readNumber() {
	float num; 
	cout << "Enter Circumference: \n";
	cin >> num;
	return num;
}

float circleArreaCalc(float c) {

	float area =  pow(c, 2) / (4 * ::pi);
	return area;

}

void printResult(float area) { 

	cout << "Circle Area = " << area << endl;
	
}

int main() {

	float circumference = readNumber();

	printResult( circleArreaCalc(circumference) );



	return 0;
}