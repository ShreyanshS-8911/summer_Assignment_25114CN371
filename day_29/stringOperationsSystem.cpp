#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int choice;

    cout << "Enter a String: ";
    getline(cin, str);

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Display String\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length = " << str.length() << endl;
                break;

            case 2: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                cout << "Reversed String = " << rev << endl;
                break;
            }

            case 3: {
                string upper = str;
                for (int i = 0; i < upper.length(); i++) {
                    upper[i] = toupper(upper[i]);
                }
                cout << "Uppercase String = " << upper << endl;
                break;
            }

            case 4: {
                string lower = str;
                for (int i = 0; i < lower.length(); i++) {
                    lower[i] = tolower(lower[i]);
                }
                cout << "Lowercase String = " << lower << endl;
                break;
            }

            case 5:
                cout << "String = " << str << endl;
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