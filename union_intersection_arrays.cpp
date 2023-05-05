#include<bits/stdc++.h>
using namespace std;

void union_array(vector<int>&nums,vector<int>&b){
    map<int,int> mp;

    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(int i=0;i<b.size();i++){
        mp[b[i]]++;
    }
    cout<<"Union of the 2 arrays is: ";
    for(auto &it: mp){
        cout<<" "<< it.first;
    }
    cout<<endl;
}
void intersection_array(vector<int>&nums,vector<int>&b){
    map<int ,int> mp;

    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(int i=0;i<b.size();i++){
        mp[b[i]]++;
    }
    cout<<"The intersection of the 2 arrays is: ";
    for(auto &it: mp){
        if(it.second==1)    cout<<" "<<it.first;
    }
    cout<<endl;
}

int main(){
    vector<int> arr,brr;
    int n,m;
    cout<<"Enter the size of array 1 : ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }


    cout<<"Enter the size of array 2 : ";
    cin>>m;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        brr.emplace_back(tmp);
    }

    union_array(arr,brr);
    intersection_array(arr,brr);
    return 0;
}