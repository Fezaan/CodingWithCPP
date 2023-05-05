#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size(),0);
        int x=nums.size()-(k%nums.size());
        for(int i=0;i<nums.size();i++){
            v[i]=nums[(i+x)%nums.size()];
        }
        nums=v;
        cout<<"The array after cycles is: ";
        for(auto it=nums.begin();it!=nums.end();++it) cout<<*it<<" ";
}

int main(){
    vector<int> arr;
    int k,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the number of cycles: ";
    cin>>k;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    rotate(arr,k);
    return 0;
}