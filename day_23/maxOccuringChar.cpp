#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int maxFreq = 0;
    char maxChar;
    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j])
                count++;
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxChar = str[i];
        }
    }
    cout << "Maximum occurring character: " << maxChar;
    cout << "\nFrequency: " << maxFreq;
    return 0;
}