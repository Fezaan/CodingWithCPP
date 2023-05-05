#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ma,mi,ea,ei;
    mi=INT_MAX;
    ma=INT_MIN;
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

    for(auto it: mp){
        if(it.second>ma){
            ma=it.second;
            ea=it.first;
        }
        if(it.second<mi){
            mi=it.second;
            ei=it.first;
        }
    }
    if(ma==1){
        cout<<"The highest and lowest frequency is 1."<<endl;
        return 0;
    }
    cout<<"The "<<ea<<" has the highest frequency of "<<ma<<endl;
    cout<<"The "<<ei<<" has the lowest frequency of "<<mi<<endl;
    return 0;
}