#include<bits/stdc++.h>
using namespace std;

void faultyArray(vector<int> &nums){
    vector<int> v(nums.size(),0);
    for(auto it: nums){
        v[it]++;
    }
    for(int i=1;i<v.size();i++){
        if(v[i]==0)   cout<<"The missing number is: "<<i<<endl;
        if(v[i]==2)   cout<<"The repeating number is: "<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.emplace_back(temp);
    }
    faultyArray(arr);
    return 0;
}