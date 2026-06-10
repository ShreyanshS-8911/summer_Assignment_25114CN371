#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int num;
    cin >> num;
    if (isPrime(num))
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";
    return 0;
}