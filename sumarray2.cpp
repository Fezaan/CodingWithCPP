#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,3,4,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of array: "<<accumulate(arr,arr+n,0)<<endl;
}