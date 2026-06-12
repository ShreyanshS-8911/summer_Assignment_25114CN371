#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout <<"enter the size of array= ";
    cin>> n;
    int arr[n];
    cout<< "enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"array elemenst= ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
return 0;
}