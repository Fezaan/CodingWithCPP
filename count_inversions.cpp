#include<bits/stdc++.h>
using namespace std;

int mer(vector<int> &nums,vector<int> &temp, int low,int mid,int high){
    int count=0;
    int i=low,j=mid,k=low;
    while(i<j && j<=high){
        if(nums[i]<=nums[j])
            temp[k++]=nums[i++];
        else{
            temp[k++]=nums[j++];
            count+=(mid-1);
        }
    }
    while(i<=mid-1){
        temp[k++]=nums[i++];
    }
    while(j<=high){
        temp[k++]=nums[j++];
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i];
    }
    return count;
}

int merge(vector<int> &nums,vector<int> &temp, int low, int high){
    int mid,count=0;
    if(low<high){
        mid=(low+high)/2;

        count+=merge(nums,temp,low,mid);
        count+=merge(nums,temp,mid+1,high);

        count+=mer(nums,temp,low,mid+1,high);
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr,brr(n,0);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.emplace_back(temp);
    }
    cout<<"The number of inversions is: "<<merge(arr,brr,0,n-1);
    return 0;
}