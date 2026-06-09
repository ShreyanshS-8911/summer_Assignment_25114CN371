#include<bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int largestPrimeFactor = -1;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {  // i is a factor

            bool isPrime = true;

            if (i <= 1) {
                isPrime = false;
            } else {
                for (int j = 2; j < i; j++) {
                    if (i % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime) {
                largestPrimeFactor = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}