#include <iostream>
#include <string>
using namespace std;

void printAllFromAAAtoZZZ() 
{
	cout << "\nresult = \n";

	for (int i = 65; i <= 90; i++) 
	{
		for (int f = 65; f <= 90; f++) 
		{
			for (int x = 65; x <= 90; x++) 
			{
				cout << char(i) << char(f) << char(x) << endl;
			}
		}
		
	}

}

int main() {

	printAllFromAAAtoZZZ();








	return 0;
}