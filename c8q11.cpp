#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>


using namespace std;

void addNums(string, string);

void addNums(string num1, string num2) {
    int num1array[20] = {0};
    int num2array[20] = {0};
    int sumarray[20] = {0};
    string holdernum1;
    string holdernum2;
    string sumnumrev;
    string sumnum;
    for (int i = num1.length() - 1; i >= 0; i--)
        holdernum1 += num1[i];
    for (int i = 0; i < holdernum1.length(); i++) {
        num1array[i] = int(holdernum1[i]) - 48 ;
    }
    for (int i = num2.length() - 1; i >= 0; i--)
        holdernum2 += num2[i];
    for (int i = 0; i < holdernum2.length(); i++) {
        num2array[i] = int(holdernum2[i]) - 48;
    }
    for (int i = 0; i < 20; i++) {
        if (num1array[i] + num2array[i] != 0 && num1array[i] + num2array[i] < 10 ) {
            sumnumrev += to_string(num1array[i] + num2array[i]);
        }
        else if (num1array[i] + num2array[i] != 0 && num1array[i] + num2array[i] >= 10 ) {
            sumnumrev += to_string(num1array[i] + num2array[i] - 10);
            if (i + 1 <= 20) {
                num1array[i + 1] += 1;
            }
            else {
                cout << "Out of range" << endl;
            }
        }
    }
    for (int i = sumnumrev.length() - 1; i >= 0; i--)
        sumnum += sumnumrev[i];
    cout << sumnum;
    
}


int main() {
    string num1;
    string num2;
    cout << "Enter your first number, up to 20 digits" << endl;
    cin >> num1;
    cout << "Enter your second number, up to 20 digits" << endl;
    cin >> num2;
    addNums(num1, num2);
}