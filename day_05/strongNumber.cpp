#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num,r,sum=0;
    cout<< "enter the number: ";
    cin>> num;
    int n=num;
    while(num>0){
        r=num%10;
        sum+= factorial(r);
        num=num/10;
    }
    if(sum==n){
        cout<<"strong number";
    }
    else{
        cout<<"not a strong number";
    }
return 0;
}