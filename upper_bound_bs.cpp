#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> & nums, int l, int h, int t){
    if(l>h)
        return -1;
    int mid=(l+h)/2;
    if(nums[mid]<=t && nums[mid+1]>t)   return nums.size()-1-mid;
    else if(nums[mid]>t)  upperBound(nums,l,mid-1,t);
    else    upperBound(nums,mid+1,h,t);  
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.emplace_back(temp);
    }
    cout<<"Enter the lower bound element: ";
    int target;
    cin>>target;
    int x=upperBound(arr,0,n-1,target);
    cout<<"The number of elements smaller than target are : "<<x;
    return 0;
}