#include <iostream>
#include <cstdlib>
using namespace std;


int randomNumber(int from, int to) 
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}

int main() 
{

	// Seed the random number generator with the current time.
	// This ensures that we get a different sequence of random numbers on each run.
	// use only once in maun function
	srand((unsigned)time(NULL));

	cout << randomNumber(1, 10) << endl;
	cout << randomNumber(1, 10) << endl;
	cout << randomNumber(1, 10) << endl;



	return 0;
}