#include <bits/stdc++.h>
using namespace std;
int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Hello " << name << "!" << endl;
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "Hello " << name << "!" << endl;
        cout << "You are not eligible to vote." << endl;
        cout << "You can vote after " << 18 - age << " year(s)." << endl;
    }
    return 0;
}