#include <iostream>
#include <string>

using namespace std;

int main()
{
	int counter;
	string name,ssn,userid,password;
	
	cout <<"Enter Name: ";
	cin >> name;

	cout << "Enter SSN: ";
	cin >> ssn;

	cout << "Enter User ID: ";
	cin >> userid;
	
	cout << "Enter password: ";
	cin >> password;

	cout << "Name: " << name <<endl;
	cout << "SSN:  xxx-xx-xxxx"<<endl;
	cout << "User ID: " << userid << endl;;
	cout << "Password: ";
	for(counter=0; counter<password.length(); counter++)
	{
		cout << "x";
	}

}