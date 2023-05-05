#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //implementation
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    //fetching

    int m;
    cout<<"Enter the no. of queries: ";
    cin>>m;
    while(m--){
        int temp;
        cout<<"Enter the number to be found: ";
        cin>>temp;
        cout<<"The number of frequencies of "<<temp<<" is : "<<mp[temp]<<endl;
    }
    return 0;
}