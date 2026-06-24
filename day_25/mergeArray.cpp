#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n = 4, m = 4;
    int merged[n + m];
    for (int i = 0; i < n; i++)
        merged[i] = arr1[i];
    for (int i = 0; i < m; i++)
        merged[n + i] = arr2[i];
    sort(merged, merged + n + m);
    for (int i = 0; i < n + m; i++)
        cout << merged[i] << " ";
    return 0;
}