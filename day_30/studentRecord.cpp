#include <bits/stdc++.h>
using namespace std;
int main() {
    const int MAX = 100;

    int rollNo[MAX];
    string name[MAX];
    float marks[MAX];

    int n = 0, choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Roll Number: ";
                cin >> rollNo[n];

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter Student Name: ";
                getline(cin, name[n]);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Records Found!\n";
                } else {
                    cout << "\nStudent Records:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nRoll No : " << rollNo[i];
                        cout << "\nName    : " << name[i];
                        cout << "\nMarks   : " << marks[i];
                        cout << "\n----------------------";
                    }
                    cout << endl;
                }
                break;

            case 3: {
                int searchRoll;
                bool found = false;

                cout << "Enter Roll Number to Search: ";
                cin >> searchRoll;

                for (int i = 0; i < n; i++) {
                    if (rollNo[i] == searchRoll) {
                        cout << "\nStudent Found!\n";
                        cout << "Roll No : " << rollNo[i] << endl;
                        cout << "Name    : " << name[i] << endl;
                        cout << "Marks   : " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Student Not Found!\n";

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