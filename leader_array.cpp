#include<bits/stdc++.h>
using namespace std;

void leaders(vector<int>& nums) {
    vector<int> leader;
    int mx=INT_MIN;
    for(int i=nums.size()-1;i>0;i--){
        if(nums[i]>mx){
            mx=nums[i];
            leader.emplace_back(mx);
        }
    }
    cout<<"The leaders in this array is: ";
    for(auto it: leader){
        cout<<" "<<it;
    }
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
    leaders(arr);
    return 0;
}