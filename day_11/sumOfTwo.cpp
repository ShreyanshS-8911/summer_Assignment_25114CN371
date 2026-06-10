#include<bits/stdc++.h>
using namespace std;
int twoSum(int *a, int *b){
    return *a + *b;
}
int main(){
    int a,b;
    cout << "enter two numbers:";
    cin >> a >> b;
    cout<< "Sum of two numbers= "<< twoSum(&a,&b);
return 0;
}