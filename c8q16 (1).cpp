#include<iostream>
#include<string>
#include<fstream>


using namespace std;

void pickSeats(char[13][6]);


void pickSeats(char seats[13][6]) {
    string ticket;
    char seat;
    int seatnum;
    int rownum;
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
    cout << "Select a row number, 1-13" << endl;
    cin >> rownum;
    if (seat == 'A')
        seatnum = 0;
    else if (seat == 'B')
        seatnum = 1;
    else if (seat == 'C')
        seatnum = 2;
    else if (seat == 'D')
        seatnum = 3;
    else if (seat == 'E')
        seatnum = 4;
    else if (seat == 'F')
        seatnum = 5;
    if (seats[rownum-1][seatnum] == '*') {
        seats[rownum-1][seatnum] = 'X';
        cout << "Your seat has been assigned" << endl;
        cout << "      A B C D E F" << endl;
        for (int i = 0; i < 13; i++) {
            cout << "Row " << i + 1 << " ";
            for (int j = 0; j < 6; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "This seat is already occupied" << endl;
    }
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