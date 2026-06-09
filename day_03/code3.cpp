#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << "GCD = " << a;

    return 0;
}