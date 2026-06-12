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
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max= "<<max << endl;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<< "min= "<< min << endl;
return 0;
}