#include <bits/stdc++.h>
using namespace std;
struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> emp[n].id;

                cout << "Enter Employee Name: ";
                cin >> emp[n].name;

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Employee Records Found!\n";
                } else {
                    cout << "\nEmployee Records:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "ID: " << emp[i].id
                             << ", Name: " << emp[i].name
                             << ", Salary: " << emp[i].salary << endl;
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter Employee ID to Search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (emp[i].id == searchId) {
                        cout << "\nEmployee Found:\n";
                        cout << "ID: " << emp[i].id << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Salary: " << emp[i].salary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Employee Not Found!\n";
                }
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