#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int first = 0, second = 1, next;

    if (n == 1)
        cout << "Nth Fibonacci term = " << first;
    else if (n == 2)
        cout << "Nth Fibonacci term = " << second;
    else {
        for (int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Nth Fibonacci term = " << second;
    }

    return 0;
}