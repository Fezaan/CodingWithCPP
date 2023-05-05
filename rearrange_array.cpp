#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int>& nums) {
        vector<int> a,b,c;
        for(auto it: nums){
            if(it<0)    a.push_back(it);
            else    b.push_back(it);
        }
        for(int i=0;i<a.size();i++){
            c.push_back(b[i]);
            c.push_back(a[i]);
        }
        cout<<"The rearranged array is : ";
        for(auto it: c){
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
    rearrangeArray(arr);
    return 0;
}