#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void getName();


int main()
{
	getName();
	return 0;
}

void getName()
{
	string fullName;
	ifstream inData;
	string lastName;
	string otherName;
	string firstName;
	int commas;
	int namelength;
	inData.open("names.txt");
	while (getline(inData, fullName)) {
		commas = fullName.find(",");
		lastName = fullName.substr(0, commas);
		namelength = fullName.length();
		firstName = fullName.substr(commas + 2, namelength);
		cout << firstName << " " << lastName << endl;
	}
	
	inData.close();
	
}