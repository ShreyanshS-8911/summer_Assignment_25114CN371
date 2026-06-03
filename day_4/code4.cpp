#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start and end of range: ";
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int temp = num;
        int digits = 0;
        int sum = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp != 0) {
            int digit = temp % 10;
            sum += (int)pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}