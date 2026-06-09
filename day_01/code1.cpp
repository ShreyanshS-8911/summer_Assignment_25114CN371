#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cout<< "enter the number:";
    cin >> n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout <<"sum of first "<< n << " natural numbers="<< sum ;
    return 0;
}                       