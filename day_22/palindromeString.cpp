#include <bits/stdc++.h>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int start = 0;
    int end = length - 1;
    bool palindrome = true;
    while (start < end) {
        if (str[start] != str[end]) {
            palindrome = false;
            break;
        }
        start++;
        end--;
    }
    if (palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}