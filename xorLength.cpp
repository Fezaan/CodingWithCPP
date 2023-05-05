#include<bits/stdc++.h>
using namespace std;

int xorLength(vector<int>& num, int target) {
        unordered_map<int,int> mpp;
        int maxs=0,count=0;

        for(int i=0;i<num.size();i++){
            maxs=maxs^num[i];
            if(maxs==target){
                count++;
            }
            int h=maxs^target;
            if(mpp.find(h)!=mpp.end())   count+=mpp[h];
            mpp[maxs]++;
        }
        return count;
}

int main(){
    int n,target;
    cout<<"The size of array is : ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.emplace_back(temp);
    }
    cout<<"Enter the target xor value: ";
    cin>>target;
    cout<<"The number of subarrays with xor= "<<target<<" is: "<<xorLength(v,target)<<endl;
    return 0;
}