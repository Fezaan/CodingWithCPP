#include<bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        cout<<"The next permutation is: ";
        for(auto it: nums){
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
    nextPermutation(arr);
    return 0;
}