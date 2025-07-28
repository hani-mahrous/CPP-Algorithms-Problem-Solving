#include <iostream>
#include <string>
using namespace std;

string readName(string msg) 
{
	string text = "";
	cout << msg << endl;
	getline(cin, text);
	return text;
}

string encryptName(string name, short encrytionKey) 
{

	for (int i = 0; i <= name.length(); i++)
	{
		name[i] = char((int)name[i] + encrytionKey);
	}

	return name;
}

string decryptName(string name, short encrytionKey) 
{	
	for (int i = 0; i <= name.length(); i++) 
	{
		name[i] = char((int)name[i] - encrytionKey);
	}

	return name;
}

int main() 
{

	const short encrytionKey = 2;

	string name = readName("Enter Your Name: ");
	string nameAfterEncrypt =  encryptName(name, encrytionKey);
	string nameAfterDecrypt = decryptName(nameAfterEncrypt , encrytionKey);

	cout << "Name before Encrypt = " << name << endl;
	cout << "Name after Encrypt = " << nameAfterEncrypt << endl;
	cout << "Name after Decrypt = " << nameAfterDecrypt << endl;








	return 0;
}