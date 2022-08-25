#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void getData(double[12][2]);
double averageHigh(double[12][2]);
double averageLow(double[12][2]);
int indexHighTemp(double[12][2]);
int indexLowTemp(double[12][2]);

int main() {
    double temperatures[12][2];
    getData(temperatures);
    cout << "Average high temp is " << averageHigh(temperatures) << endl;
    cout << "Average low temp is " << averageLow(temperatures) << endl;
    cout << "Index of highest temp is " << indexHighTemp(temperatures) << endl;
    cout << "Index of lowest temp is " << indexLowTemp(temperatures) << endl;
    return 0;
}

void getData(double temp[12][2]) {
    for (int i = 0; i < 12; i++) {
        cout << "Enter the highest temp for month " << i + 1 << endl;
        cin >> temp[i][0];
        cout << "Enter the lowest temp for month " << i + 1 << endl;
        cin >> temp[i][1];
    }
}

double averageHigh(double temp[12][2]) {
    double sum = 0;
     for (int i = 0; i < 12; i++) {
         sum += temp[i][0];
     }
     return (sum/12);
}


double averageLow(double temp[12][2]) {
    double sum = 0;
     for (int i = 0; i < 12; i++) {
         sum += temp[i][1];
     }
     return (sum/12);
}

int indexHighTemp(double temp[12][2]) {
    int index = -1;
    int highest = -100;
    for (int i = 0; i < 12; i++) {
        if (temp[i][0] > highest) {
            highest = temp[i][0];
            index = i;
        }
     }
    return index;
}


int indexLowTemp(double temp[12][2]) {
    int index = -1;
    int lowest = 100;
    for (int i = 0; i < 12; i++) {
        if (temp[i][1] < lowest) {
            lowest = temp[i][1];
            index = i;
        }
     }
    return index;
}


