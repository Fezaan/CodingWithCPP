#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        int count=0,mx=0;
        if (nums.size()==0){
            return 0;
        }
        set<int> s;
        for(auto it: nums)  s.emplace(it);
        for(auto it=s.begin();next(it)!=s.end();++it){
            if((*next(it,1))-(*it)==1){
                count++;
                mx=max(mx,count);
            }
            else{
                mx=max(mx,count);  count=0;
            }
        }
        return mx+1;
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
    cout<<"The longest sequence is of length: "<<longestConsecutive(arr)<<endl;
    return 0;
}