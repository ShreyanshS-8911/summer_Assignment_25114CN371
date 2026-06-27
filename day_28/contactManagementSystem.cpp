#include <bits/stdc++.h>
using namespace std;
struct Contact {
    string name;
    string phone;
};

int main() {
    Contact contacts[100];
    int n = 0, choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                cout << "Enter Name: ";
                getline(cin, contacts[n].name);

                cout << "Enter Phone Number: ";
                getline(cin, contacts[n].phone);

                n++;
                cout << "Contact Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Contacts Found!\n";
                } else {
                    cout << "\nContact List:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nName  : " << contacts[i].name;
                        cout << "\nPhone : " << contacts[i].phone;
                        cout << "\n---------------------";
                    }
                    cout << endl;
                }
                break;

            case 3: {
                string searchName;
                bool found = false;

                cout << "Enter Name to Search: ";
                getline(cin, searchName);

                for (int i = 0; i < n; i++) {
                    if (contacts[i].name == searchName) {
                        cout << "\nContact Found!\n";
                        cout << "Name  : " << contacts[i].name << endl;
                        cout << "Phone : " << contacts[i].phone << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Contact Not Found!\n";

                break;
            }

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}