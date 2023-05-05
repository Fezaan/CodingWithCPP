#include<bits/stdc++.h>
using namespace std;


int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<=n;i++){
            if(i==n){
                sum1+=i;
                continue;
            }
            sum1+=i;
            sum2+=nums[i];
        }
        return sum1-sum2;
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