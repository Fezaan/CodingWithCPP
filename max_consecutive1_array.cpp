#include<bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)  count++;
            if(nums[i]==0 || i==(nums.size()-1)){
                v.push_back(count);
                count=0;
            }
        }
//        for(auto it=v.begin();it!=v.end();++it)
//            cout<<" "<<*it;
        sort(v.begin(),v.end(),greater<int>());
        return v[0];
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
    cout<<"Max number of 1's is : "<<findMaxConsecutiveOnes(arr);
    return 0;
}