#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> v;
        if(nums.size()==0)  return v;
        sort(nums.begin(),nums.end());
        vector<int> a=nums[0];
        for(auto it: nums){
            if(it[0]<=a[1]) a[1]=max(a[1],it[1]);
            else{
                v.push_back(a);
                a=it;
            }
        }
        v.push_back(a);
        return v;
    }

int main(){
    int n,target;
    cout<<"The number of intervals is : ";
    cin>>n;
    cout<<"Enter the intervals in array: "<<endl;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> x;
        for(int j=0;j<2;j++){
            int a;
            cin>>a;
            x.push_back(a);
        }
        v.push_back(x);
    }
    vector<vector<int>> ans=merge(v);
    cout<<"The merged intervals are :"<<endl;
    for(int i=0;i<ans.size();i++){
        for(auto it: ans[i])    cout<<" "<<it;
        cout<<endl;
    }
    return 0;
}