#include <bits/stdc++.h>
using namespace std;
struct Account {
    int accNo;
    string name;
    float balance;
};

int main() {
    Account acc;
    int choice;
    float amount;

    cout << "Enter Account Number: ";
    cin >> acc.accNo;

    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, acc.name);

    cout << "Enter Initial Balance: ";
    cin >> acc.balance;

    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                acc.balance += amount;
                cout << "Deposit Successful!\n";
                break;

            case 2:
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;

                if (amount <= acc.balance) {
                    acc.balance -= amount;
                    cout << "Withdrawal Successful!\n";
                } else {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 3:
                cout << "\nAccount Number : " << acc.accNo;
                cout << "\nAccount Holder : " << acc.name;
                cout << "\nCurrent Balance: " << acc.balance << endl;
                break;

            case 4:
                cout << "Thank You for Using Bank Account System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}