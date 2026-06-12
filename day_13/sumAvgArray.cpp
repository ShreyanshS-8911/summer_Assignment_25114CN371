#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout <<"enter the size of array= ";
    cin>> n;
    int arr[n];
    cout<< "enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<< "sum= "<< sum;
    cout<< endl;
    cout<< "average="<< sum/n;
return 0;
}