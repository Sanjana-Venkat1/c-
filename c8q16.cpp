#include<iostream>
#include<string>
#include<fstream>


using namespace std;

void pickSeats(char[13][6]);


void pickSeats(char seats[13][6]) {
    string ticket;
    string seat;
    cout << "Select a class for ticket type: First, Business, Economy" << endl;
    cin >> ticket;
    cout << "      A B C D E F" << endl;
        for (int i = 0; i < 13; i++) {
            cout << "Row " << i + 1 << " ";
            for (int j = 0; j < 6; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }
    cout << "Select a desired seat, A-F" << endl;
    cin >> seat;
    
}




int main() {
    char seats[13][6];
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 6; j++) {
            seats[i][j] = '*';
        }
    }
    pickSeats(seats);
    return 0;
}