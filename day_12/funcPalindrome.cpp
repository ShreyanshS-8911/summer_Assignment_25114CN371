#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n) {
    int original = n;
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return original == rev;
}
int main() {
    int num;
    cin >> num;
    if (isPalindrome(num))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
    return 0;
}