#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    long long binary = 0;
    int place = 1;

    cout << "Enter a decimal number: ";
    cin >> num;

    while (num > 0) {
        int remainder = num % 2;
        binary += remainder * place;
        place *= 10;
        num /= 2;
    }

    cout << "Binary = " << binary;

    return 0;
}