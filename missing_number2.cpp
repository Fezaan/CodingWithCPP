#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> & nums){
    int n=nums.size()+1;
    int sum=n*(n+1)/2;
    int cal=0;
    for(auto it: nums){
        cal+=it;
    }
    return sum-cal;
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
    cout<<"Missing number is : "<<missingNumber(arr);
    return 0;
}