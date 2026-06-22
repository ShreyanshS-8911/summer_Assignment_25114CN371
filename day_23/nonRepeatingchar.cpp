#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    bool found = false;
    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "First non-repeating character: " << str[i];
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No non-repeating character found.";
    }
    return 0;
}