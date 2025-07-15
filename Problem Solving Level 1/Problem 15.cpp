#include <iostream>
using namespace std;

void readNums(float& hight, float& width) {

	cout << "Enter Hight: \n";
	cin >> hight;
	cout << "Enter Width: \n";
	cin >> width;

}

float rectangleArreaCalc(float& hight, float& width) {

	return hight * width;
}

void printResult(float area) {

	cout << "Rectangle Area = " << area;
}

int main() {

	float hight, width;

	readNums(hight, width);
	printResult(rectangleArreaCalc(hight, width));



	return 0;
}