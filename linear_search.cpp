#include<bits/stdc++.h>
using namespace std;

int lsearch(vector<int>&nums,int k){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr;
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    cout<<"Enter the number to be searched: ";
    cin>>k;
    int x=lsearch(arr,k);
    if(x==-1)  cout<<"Element not found."<<endl;
    else    cout<<"Element found at "<<x<<"th index. "<<endl;
    return 0;
}