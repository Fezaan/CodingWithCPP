#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int x;
        for(auto it: mp){
            if(it.second> nums.size()/2)
                x=it.first;
        }
        return x;
    }

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    cout<<"Majority element is: "<<majorityElement(arr)<<endl;
    return 0;
}