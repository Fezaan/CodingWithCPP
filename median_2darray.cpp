#include<bits/stdc++.h>
using namespace std;

int smaller(vector<int> &a, int target){
    int l=0, h=a.size();
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]<=target)   l=mid+1;
        else    h=mid-1;
    }
    return l;
}

int findMedian(vector<vector<int>> &v){
    int l=0;
    int h=1e9;
    int n=v.size(), m=v[0].size();
    while(l<=h){
        int mid=(l+h)/2;
        int count=0;

        for(int i=0;i<n;i++){
            count+=smaller(v[i],mid);
        }

        if(count<=n*m/2)    l=mid+1;
        else    h=mid-1;
    }
    return l;
}

int main(){
    int n,m;
    cout<<"Enter the size of 2D array: ";
    cin>>n>>m;
    cout<<"Enter the elements: "<<endl;

    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> x;
        for(int j=0;j<m;j++){
            int tmp;
            cin>>tmp;
            x.emplace_back(tmp);
        }
        v.emplace_back(x);
    }
    int a=findMedian(v);
    cout<<"Median is: "<<a<<endl;
    return 0;
}