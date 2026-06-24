#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    sort(names, names + n);
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
    return 0;
}