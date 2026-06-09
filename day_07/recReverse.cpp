#include <bits/stdc++.h>
using namespace std;
int rev = 0;
void reverseNum(int n) {
    if (n == 0)
        return;
    rev = rev * 10 + n % 10;
    reverseNum(n / 10);
}
int main() {
    int num;
    cin >> num;
    reverseNum(num);
    cout << rev;
}