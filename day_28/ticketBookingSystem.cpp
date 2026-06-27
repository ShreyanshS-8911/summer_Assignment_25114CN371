#include <bits/stdc++.h>
using namespace std;
struct Ticket {
    int ticketNo;
    string passengerName;
    int seats;
};

int main() {
    Ticket t;
    int choice;
    const int totalSeats = 50;
    int availableSeats = totalSeats;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. View Ticket Details\n";
        cout << "3. Check Available Seats\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Ticket Number: ";
                cin >> t.ticketNo;

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter Passenger Name: ";
                getline(cin, t.passengerName);

                cout << "Enter Number of Seats: ";
                cin >> t.seats;

                if (t.seats <= availableSeats) {
                    availableSeats -= t.seats;
                    cout << "Ticket Booked Successfully!\n";
                } else {
                    cout << "Not Enough Seats Available!\n";
                }
                break;

            case 2:
                cout << "\nTicket Number : " << t.ticketNo << endl;
                cout << "Passenger Name: " << t.passengerName << endl;
                cout << "Booked Seats  : " << t.seats << endl;
                break;

            case 3:
                cout << "Available Seats: " << availableSeats << endl;
                break;

            case 4:
                cout << "Thank You for Using Ticket Booking System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}