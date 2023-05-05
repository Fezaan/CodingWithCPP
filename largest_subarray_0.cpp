#include<bits/stdc++.h>
using namespace std;

int zeroSum(vector<int>& num) {
        unordered_map<int,int> mpp;
        int maxs=INT_MIN,count=0;

        for(int i=0;i<num.size();i++){
            maxs+=num[i];
            if(maxs==0){
                count++;
            }
            else{
                if(mpp.find(maxs)!=mpp.end())   count=max(count,i-mpp[maxs]);
                else    mpp[maxs]=i;
            }
        }
        return count;
    }

int main(){
    int n;
    cout<<"The size of array is : ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.emplace_back(temp);
    }
    cout<<"The size of largest subarray with zero sum is: "<<zeroSum(v)<<endl;
    return 0;
}