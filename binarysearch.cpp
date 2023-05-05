#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    //now sort the inputted string
    //the index will be shown correctly only if the array is sorted
    
    bool f=false;
    int x;
    cin>>x;
    sort(arr,arr+n);
    int mid=n/2;
    while(arr[mid]!=x){
        if(arr[mid]==x){
            f=true;
            break;
            }
        if(arr[mid]<x)
            mid=mid/2;
        else    mid=(mid+n)/2;
    }

    if(f==true) cout<<"Element found"<<endl;
    else    cout<<"Element not found"<<endl;

    return 0;
}