#include<iostream>
#include<string>
#include<iomanip>
#include "romanType.h"


using namespace std;


int main() {
    string roman;
    cout << "Enter roman numeral" << endl;
    cin >> roman;
    romanType newRoman;
    newRoman.setRoman(roman);
    newRoman.romantoInt();
    newRoman.printRoman();
    newRoman.printDecimal();
    
    
}