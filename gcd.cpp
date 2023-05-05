#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    return(b,a%b);
}

int main(){
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    int temp=a;
    a=max(a,b);
    b=min(temp,b);
    cout<<"The gcd of a and b is: "<<gcd(b,a);
    return 0;
}