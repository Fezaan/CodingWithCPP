#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n;
    while(temp!=0){
        m+=temp%10;
        temp/=10;
        m*=10;
    }
    cout<<"Reverse number: "<<m/10<<endl;
    return 0;
}