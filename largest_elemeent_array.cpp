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
    //using above concept
    cout<<"The largest element is: "<<m<<endl;

    //using inbuilt method
    cout<<"The largest element is: "<<*max_element(arr,arr+n)<<endl;

    return 0;
}