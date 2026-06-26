#include <bits/stdc++.h>
using namespace std;
struct Student {
    int rollNo;
    string name;
    float marks;
};
int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Roll No: ";
                cin >> s[n].rollNo;

                cout << "Enter Name: ";
                cin >> s[n].name;

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "No Records Found!\n";
                } else {
                    cout << "\nStudent Records:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Roll No: " << s[i].rollNo
                             << ", Name: " << s[i].name
                             << ", Marks: " << s[i].marks << endl;
                    }
                }
                break;

            case 3: {
                int roll;
                bool found = false;

                cout << "Enter Roll No to Search: ";
                cin >> roll;

                for (int i = 0; i < n; i++) {
                    if (s[i].rollNo == roll) {
                        cout << "Record Found!\n";
                        cout << "Roll No: " << s[i].rollNo
                             << "\nName: " << s[i].name
                             << "\nMarks: " << s[i].marks << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Record Not Found!\n";
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