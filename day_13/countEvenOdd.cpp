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
    int evenCount=0,oddCount=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<< "Even Count= "<< evenCount << endl;
    cout<< "Odd Count= " << oddCount << endl;
return 0;
}