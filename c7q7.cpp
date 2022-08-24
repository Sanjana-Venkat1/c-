#include <iostream>
#include <cmath>

using namespace std;

void menu();
void addFractions(int f1num, int f1den, int f2num, int f2den);
void subtractFractions(int f1num, int f1den, int f2num, int f2den);
void multiplyFractions(int f1num, int f1den, int f2num, int f2den);
void divideFractions(int f1num, int f1den, int f2num, int f2den);

void menu() {
    int f1num;
    int f1den;
    int f2num;
    int f2den;
    string oper;
    cout << "This program allows fractions to be added, subtracted, multiplied and divided" << endl;
    cout << "First, you will select which funcion operation you want to perform" << endl;
    cout << "Then you will enter four integers (not = 0) that will make up the numerators and denominators of the fractions" << endl;
    cout << "Enter one of the following: +, -, *, /" << endl;
    cin >> oper;
    cout << "Enter the numerator of the first fraction" << endl;
    cin >> f1num;
    cout << "Enter the denominator of the first fraction" << endl;
    cin >> f1den;
    cout << "Enter the numerator of the second fraction" << endl;
    cin >> f2num;
    cout << "Enter the denominator of the second fraction" << endl;
    cin >> f2den;
    if (oper == "+") {
        cout << "Adding two fractions" << endl;
        addFractions(f1num, f1den, f2num, f2den);
    }
    else if (oper == "-") {
        cout << "Subtracting two fractions" << endl;
        subtractFractions(f1num, f1den, f2num, f2den);
    }
    else if (oper == "*") {
        cout << "Multiplying two fractions" << endl;
        multiplyFractions(f1num, f1den, f2num, f2den);
    }
    else if (oper == "/") {
        cout << "Dividing two fractions" << endl;
        divideFractions(f1num, f1den, f2num, f2den);
    }
    else {
        cout << "Invalid operator entered" << endl;
    }
}

void addFractions(int f1num, int f1den, int f2num, int f2den) {
    int num1;
    int num2;
    int num;
    int den;
    num1 = f1den * f2num;
    num2 = f2den * f1num;
    num = num1 + num2;
    den = f1den * f2den;
    cout << f1num << "/" << f1den << " + " << f2num << "/" << f2den << " = " << num << "/" << den << endl;
  
}

void subtractFractions(int f1num, int f1den, int f2num, int f2den) {
    int num1;
    int num2;
    int num;
    int den;
    num1 = f1den * f2num;
    num2 = f2den * f1num;
    num = num2 - num1;
    den = f1den * f2den;
    cout << f1num << "/" << f1den << " - " << f2num << "/" << f2den << " = " << num << "/" << den << endl;
  
} 

void multiplyFractions(int f1num, int f1den, int f2num, int f2den) {
    int num;
    int den;
    num = f1num * f2num;
    den = f1den * f2den;
    cout << f1num << "/" << f1den << " * " << f2num << "/" << f2den << " = " << num << "/" << den << endl;
  
} 


void divideFractions(int f1num, int f1den, int f2num, int f2den) {
    int num;
    int den;
    num = f1num * f2den;
    den = f1den * f2num;
    cout << f1num << "/" << f1den << " / " << f2num << "/" << f2den << " = " << num << "/" << den << endl;
  
} 

int main() {
    menu();
    return 0;
}