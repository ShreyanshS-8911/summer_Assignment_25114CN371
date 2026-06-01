#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r,rev=0;
    cout<< "enter the number: ";
    cin>> n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<< "Reversed number= " << rev;
    return 0;
}
