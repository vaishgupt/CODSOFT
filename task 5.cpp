#include <bits/stdc++.h>
using namespace std;

int main() {
    string movie;
    cout << "Enter the movie name: ";
    getline(cin, movie);

    int cost, totalSeats, availSeats, filledSeats, seats;
    int rs = 0; 

    if (movie == "A" ||
        movie == "B" ||
        movie == "C" ||
        movie == "D" ||
        movie =="E") {

        cout << "Cost of ticket: ";
        cin >> cost;
        cout << "Total seats: ";
        cin >> totalSeats;
        cout << "Available seats: ";
        cin >> availSeats;
        cout << "Seats to reserve: ";
        cin >> seats;

        if (seats <= availSeats) {
            rs = cost * seats; 
            cout << "Cost of total ticket: " << rs << endl;
        } else {
            cout << "Not enough available seats!" << endl;
        }
    } else {
        cout << "Movie is not available" << endl;
    }

    return 0;
}