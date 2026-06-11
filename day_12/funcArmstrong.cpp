#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int n) {
    int original = n;
    int digits = 0;
    int temp = n;
    int sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return original == sum;
}
int main() {
    int num;
    cin >> num;
    if (isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
    return 0;
}