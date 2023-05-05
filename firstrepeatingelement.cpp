#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the elements: ";
    const int N=1e4;
    int check[N];
    int x=INT_MAX;
    for(int i=0;i<n;i++)    check[i]=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(check[arr[i]]!=0){
            x=min(x,check[arr[i]]);
            break;
        }
        else    check[arr[i]]=i;
    }
    if(x==INT_MAX){
            cout<<"No such element found."<<endl;
    }
    else
        cout<<"Repeated element with smallest index is: "<<x+1<<endl;
    return 0;
}