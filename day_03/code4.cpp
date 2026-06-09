#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int maxNum = max(a, b);

    while (true) {
        if (maxNum % a == 0 && maxNum % b == 0) {
            cout << "LCM = " << maxNum;
            break;
        }
        maxNum++;
    }

    return 0;
}