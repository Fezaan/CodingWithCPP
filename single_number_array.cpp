#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto it: mp){
            if(it.second==1)
                return it.first;
        }
        return -1;
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    cout<<"Element occuring once is : "<<singleNumber(arr);
    return 0;
}