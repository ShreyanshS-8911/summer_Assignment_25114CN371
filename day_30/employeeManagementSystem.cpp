#include <bits/stdc++.h>
using namespace std;
int main() {
    const int MAX = 100;

    int empId[MAX];
    string empName[MAX];
    float salary[MAX];

    int n = 0;
    int choice;

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Employee ID: ";
                cin >> empId[n];

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter Employee Name: ";
                getline(cin, empName[n]);

                cout << "Enter Salary: ";
                cin >> salary[n];

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Employee Records Found!\n";
                } else {
                    cout << "\nEmployee Details:\n";

                    for (int i = 0; i < n; i++) {
                        cout << "\nEmployee ID : " << empId[i];
                        cout << "\nName        : " << empName[i];
                        cout << "\nSalary      : " << salary[i];
                        cout << "\n---------------------------";
                    }
                    cout << endl;
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter Employee ID to Search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (empId[i] == searchId) {
                        cout << "\nEmployee Found!\n";
                        cout << "Employee ID : " << empId[i] << endl;
                        cout << "Name        : " << empName[i] << endl;
                        cout << "Salary      : " << salary[i] << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 4: {
                int updateId;
                bool found = false;

                cout << "Enter Employee ID: ";
                cin >> updateId;

                for (int i = 0; i < n; i++) {
                    if (empId[i] == updateId) {
                        cout << "Enter New Salary: ";
                        cin >> salary[i];

                        cout << "Salary Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}