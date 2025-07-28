#include <iostream>
#include <string>
using namespace std;

string readPassword(string msg) 
{
	string password = "";
	cout << msg << endl;
	cin >> password;
	return password;
}

bool guessPassword(string password)
{
	int trails = 0;
	string word = "";

	for (int i = 65; i <= 90; i++) 
	{
		for (int f = 65; f <= 90; f++) 
		{	
			for (int x = 65; x <= 90; x++) 
			{
				word = char(i);
				word += char(f);
				word += char(x);

				trails++;

				cout << "Trial [" << trails << "] : " << word << endl;
				
				if (word == password)
				{
					cout << "\nPassword is: " << word << endl;
					cout << "Found after: " << trails << " trails" << endl;
					return true;
				}

			}
		}
		
	}

}

int main() {

	guessPassword(readPassword("Please enter a 3-Letter Password (all capital)?\n"));








	return 0;
}