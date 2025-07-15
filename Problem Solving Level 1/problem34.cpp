#include <iostream>
using namespace std;

float readSales() {

	float sales;
	cout << "Enter Total Sales: \n";
	cin >> sales;
	return sales;

}

float commisionPercentage(float sales) {

	if (sales >= 1000000)
		return 0.01;
	else if (sales >= 500000)
		return 0.02;
	else if (sales >= 100000)
		return 0.03;
	else if (sales >= 50000)
		return 0.05;
	else
		return 0;
}


float clacTotalPercentage(float sales) {
	return sales * commisionPercentage(sales);
}


int main() {

	float sales = readSales();

	cout << "Commision Percentage = " << commisionPercentage(sales) << endl;
	cout << "Total Commision = " << clacTotalPercentage(sales) << endl;

	return 0;
}