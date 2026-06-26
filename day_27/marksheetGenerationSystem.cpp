#include <bits/stdc++.h>
using namespace std;
int main() {
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cout << "Enter Marks of 5 Subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    cout << "\n===== MARKSHEET =====\n";
    cout << "Name      : " << name << endl;
    cout << "Roll No   : " << rollNo << endl;
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade : A+" << endl;
    else if (percentage >= 80)
        cout << "Grade : A" << endl;
    else if (percentage >= 70)
        cout << "Grade : B" << endl;
    else if (percentage >= 60)
        cout << "Grade : C" << endl;
    else if (percentage >= 50)
        cout << "Grade : D" << endl;
    else
        cout << "Grade : F" << endl;
    if (percentage >= 40)
        cout << "Result : PASS" << endl;
    else
        cout << "Result : FAIL" << endl;
return 0;
}