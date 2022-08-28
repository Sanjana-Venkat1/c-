#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class romanType {
public:
    void setRoman(string rom) {
        roman = rom;
    }
    
    void printRoman() {
        cout << "Roman numeral: " << roman << endl;
    }
    
    void printDecimal() {
        cout << "Decimal number: " << decimal << endl;
    }
    
    void romantoInt() {
        int romlen = roman.length();
        int dec = 0;
        for (int i = 0; i < romlen; i++) {
            if (roman[i] == 'M')
                dec += 1000;
            else if (roman[i] == 'D')
                dec += 500;
            else if (roman[i] == 'C')
                dec += 100;
            else if (roman[i] == 'L')
                dec += 50;
            else if (roman[i] == 'X')
                dec += 10;
            else if (roman[i] == 'V')
                dec += 5;
            else if (roman[i] == 'I')
                dec += 1;
            }
        decimal = dec;
    }
    
private:
    string roman;
    int decimal;
};

