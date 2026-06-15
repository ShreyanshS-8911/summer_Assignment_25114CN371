#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair Found: "<< arr[i] << " + "<< arr[j] << " = "<< target <<endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "No Pair Found";
    }
    return 0;
}