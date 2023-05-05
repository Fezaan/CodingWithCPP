#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,m=0;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n;
    while(temp!=0){
        int x=(temp%10);
        m+=(x*x*x);
       // m+=(pow(x,3));
        temp/=10;
    }
    if(m==n)  cout<<"Armstrong number."<<endl;
    else    cout<<"Not armstrong number."<<endl;
    return 0;
}