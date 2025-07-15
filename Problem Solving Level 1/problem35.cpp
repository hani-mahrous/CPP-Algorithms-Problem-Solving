#include <iostream>
using namespace std;



struct stPiggy {
	int Penny, Nickel, Dime, Quarter, Doller;
};

stPiggy readMony() {

	stPiggy Piggy;

	cout << "Enter Penny: \n";
	cin >> Piggy.Penny;

	cout << "Enter Nickel: \n";
	cin >> Piggy.Nickel;

	cout << "Enter Dime: \n";
	cin >> Piggy.Dime;

	cout << "Enter Quarter: \n";
	cin >> Piggy.Quarter;

	cout << "Enter Doller: \n";
	cin >> Piggy.Doller;

	return Piggy;
}

int calcPenny(stPiggy Piggy) {

	int total = (Piggy.Penny * 1) + (Piggy.Nickel * 5) + (Piggy.Dime * 10) + (Piggy.Quarter * 25) + (Piggy.Doller * 100);
	return total;

}



int main() {

	int totalPenny = calcPenny(readMony());
	float totalDollers = (float) totalPenny / 100;

	cout << "Total Penny = " << totalPenny << endl;
	cout << "Total Dollers = " << totalDollers << endl;



	return 0;
}