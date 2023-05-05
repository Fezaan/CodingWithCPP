#include<bits/stdc++.h>
using namespace std;

bool checksorted(vector<int> &arr){
    for(int i=0;i<arr.size()-2;i++){
        if(arr[i+1]<arr[i]) return false;
    }
    return true;
}

int main(){
    int x;
    cout<<"Enter the size of array: ";
    cin>>x;
    vector<int> v;
    cout<<"Enter the array: ";
    while(x--){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    if(checksorted(v))
        cout<<"Array is sorted."<<endl;
    else
        cout<<"Array is not sorted."<<endl;
    return 0;
}