#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the values of array: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    vector<int> brr(arr);

    sort(brr.begin(),brr.end());
    if(arr==brr){
        cout<<"Array is already sorted."<<endl;
        return 0;
    }
    cout<<"Array is not sorted."<<endl;

    return 0;
}