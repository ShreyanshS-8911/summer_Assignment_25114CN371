#include<bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,-3,0,49,-435,3,49,-1};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArray(arr,n);
}