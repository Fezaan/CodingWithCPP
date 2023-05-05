#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int arr[100];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    for(int i=3;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    cout<<arr[n-1];
    return 0;
}