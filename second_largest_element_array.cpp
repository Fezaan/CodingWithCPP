#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    int o=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            continue;
        }
        if(arr[i]>o)    o=arr[i];
    }
    //using above concept
    cout<<"The second largest element is: "<<o<<endl;

    //using inbuilt method
    //cout<<"The second largest element is: "<<*max_element(arr,arr+n)<<endl;

    return 0;
}