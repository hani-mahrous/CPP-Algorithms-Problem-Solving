#include <iostream>

using namespace std;

void printTitle() 
{
	cout << "\n\n\t\t\t\t Multiplication Table From 1 to 10\n\n";
}

void printHeader() 
{
	cout << "        ";

	for (int x = 1; x <= 10; x++) 
	{
		cout << x << "\t";
	}

	cout << endl;

	for (int x = 1; x <= 90; x++) 
	{
		cout << "_";
	}

	cout << "\n\n";
}

string sperator(int i) 
{
	if (i < 10)
		return "   |   ";
	else
		return "  |   ";
}

void printTable() 
{
	printTitle();
	printHeader();

	for (int i = 1; i <= 10; i++) 
	{
		cout << i << sperator(i);

		for (int x = 1; x <= 10; x++) 
		{
			cout << x * i << "\t";
		}
		cout << " \n";

	}

	cout << "\n\n";
}


int main() 
{

	printTable();

	

	return 0;
}