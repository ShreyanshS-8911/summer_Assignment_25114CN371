#include<bits/stdc++.h>
using namespace std;
int twoMax(int *a,int *b){
    if(*a > *b){
        return *a;}
    else{
        return *b;
    }
}
int main(){
    int a,b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    cout<< "Max= "<< twoMax(&a,&b);
return 0;
}