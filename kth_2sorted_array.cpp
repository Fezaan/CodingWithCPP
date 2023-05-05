#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr,vector<int> &brr,int k){
    int a=arr.size(),b=brr.size();
    if(a>b) merge(brr,arr,k);
    int l= max(0,k-b);
    int h= min(k,a);
    while(l<=h){
        int m=(l+h)/2;
        int x=k-m;
        int l1= m==0? INT_MIN:arr[m-1];
        int l2= x==0? INT_MIN:brr[x-1];
        int r1= m==a? INT_MAX:arr[m];
        int r2= x==b? INT_MAX:brr[x];
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>l2){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }

}

int main(){
    int n,m,k;
    cout<<"Enter the size of array 1: ";
    cin>>n;
    vector<int> arr,brr;
    cout<<"Enter array 1: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        arr.emplace_back(tmp);
    }
    cout<<"Enter the size of array 2: ";
    cin>>m;
    cout<<"Enter array 2: ";
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        brr.emplace_back(tmp);
    }
    cout<<"Enter the index: ";
    cin>>k;
    cout<<"The kth largest element is: "<<merge(arr,brr,k)<<endl;
    return 0;
}