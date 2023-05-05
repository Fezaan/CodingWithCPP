#include<bits/stdc++.h>
using namespace std;


int subarraySum(vector<int>& nums, int k) {
        int sum=0,maxCount=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(auto i: nums){
            sum+=i;
            maxCount+=mp[sum-k];
            mp[sum]++;
        }
        return maxCount;
    }

int main(){
    vector<int> arr;
    int n,m;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    cout<<"Enter the sum to be obtaines: ";
    cin>>m;
    cout<<"Number of sub-arrays is : "<<subarraySum(arr,m);
    return 0;
}