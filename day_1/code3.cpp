#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=1;
    cout << "enter the number:";
    cin >> n;
    for(int i=1; i<=n; i++){
        p*=i;
    }
    cout << "factorial of number= " << p;
    return 0;
}