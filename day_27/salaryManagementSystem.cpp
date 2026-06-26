#include <bits/stdc++.h>
using namespace std;
struct Employee {
    int id;
    string name;
    float basicSalary;
    float hra;
    float da;
    float netSalary;
};

int main() {
    Employee emp[100];
    int n = 0, choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Salary Details\n";
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

                cout << "Enter Basic Salary: ";
                cin >> emp[n].basicSalary;

                emp[n].hra = 0.20 * emp[n].basicSalary; // 20% HRA
                emp[n].da = 0.10 * emp[n].basicSalary;  // 10% DA
                emp[n].netSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

                n++;
                cout << "Employee Salary Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Records Found!\n";
                } else {
                    cout << "\nSalary Details:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nID: " << emp[i].id;
                        cout << "\nName: " << emp[i].name;
                        cout << "\nBasic Salary: " << emp[i].basicSalary;
                        cout << "\nHRA: " << emp[i].hra;
                        cout << "\nDA: " << emp[i].da;
                        cout << "\nNet Salary: " << emp[i].netSalary;
                        cout << "\n-------------------------\n";
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter Employee ID: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) {
                    if (emp[i].id == searchId) {
                        cout << "\nEmployee Found!\n";
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Net Salary: " << emp[i].netSalary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Employee Not Found!\n";

                break;
            }

            case 4:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}