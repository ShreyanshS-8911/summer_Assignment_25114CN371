#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    k = k % n;
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    return 0;
}