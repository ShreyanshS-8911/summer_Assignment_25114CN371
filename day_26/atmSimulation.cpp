#include <bits/stdc++.h>
using namespace std;
int main(){
    int pin = 1234;
    int enteredPin;
    int balance = 10000;
    int choice, amount;

    cout << "Enter ATM PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN!" << endl;
        return 0;
    }

    while (true) {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Current Balance: Rs. " << balance << endl;
        }
        else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit Successful!" << endl;
        }
        else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > balance) {
                cout << "Insufficient Balance!" << endl;
            } else {
                balance -= amount;
                cout << "Withdrawal Successful!" << endl;
            }
        }
        else if (choice == 4) {
            cout << "Thank you for using the ATM!" << endl;
            break;
        }
        else {
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}