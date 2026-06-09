#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=1,r;
    cout<< "enter the number: ";
    cin>> n;
    while(n>0){
        r=n%10;
        p=p*r;
        n=n/10;
    }
    cout<< "product of digits= " << p;
    return 0;
}
