// STUDENT MANAGEMENT SYSTEM
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

int rollNo[MAX];
string name[MAX];
float marks[MAX];
int n = 0;

void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> rollNo[n];

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Student Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
    cout << "Student Added Successfully!\n";
}

void displayStudents() {
    if (n == 0) {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << rollNo[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i];
        cout << "\n-------------------------";
    }
    cout << endl;
}

void searchStudent() {
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
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
}

void updateMarks() {
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == searchRoll) {
            cout << "Enter New Marks: ";
            cin >> marks[i];
            cout << "Marks Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student Not Found!\n";
}

void deleteStudent() {
    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == searchRoll) {
            for (int j = i; j < n - 1; j++) {
                rollNo[j] = rollNo[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            n--;
            found = true;
            cout << "Student Deleted Successfully!\n";
            break;
        }
    }

    if (!found)
        cout << "Student Not Found!\n";
}

int main() {

    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}