#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}