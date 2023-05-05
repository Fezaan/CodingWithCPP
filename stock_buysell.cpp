#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        if(is_sorted(prices.begin(),prices.end(),greater<int>())) return 0;
        int mn=INT_MAX,pro=0,tod=0;
        for(auto it: prices){
            mn=min(it,mn);
            tod=it-mn;
            pro=max(pro,tod);
        }
        return pro;
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
    cout<<"Max profit is: "<<maxProfit(arr)<<endl;
    return 0;
}