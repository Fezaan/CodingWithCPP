#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,x;
    cout<<"Enter any number: ";
    cin>>n;
    while(n!=0){
        x=n%10;
        sum+=x;
        n/=10;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
    return 0;
}