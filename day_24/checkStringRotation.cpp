#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() != s2.length()) {
        cout << "Not Rotation";
        return 0;
    }
    string temp = s1 + s1;
    bool found = false;
    for (int i = 0; i <= temp.length() - s2.length(); i++) {
        int j;
        for (j = 0; j < s2.length(); j++) {
            if (temp[i + j] != s2[j])
                break;
        }
        if (j == s2.length()) {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Rotation";
    else
        cout << "Not Rotation";
    return 0;
}