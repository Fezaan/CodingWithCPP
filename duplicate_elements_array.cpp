#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    set<int> s;
    cout<<"Enter the values of array: ";

    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        s.emplace(tmp);
    }
    cout<<"The array after removing duplicates is : ";
    for(auto it= s.begin();it!=s.end();++it){
        cout<<" "<< *it;
    }
}