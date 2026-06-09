#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the range: ";
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        if (num <= 1)
            continue;

        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}