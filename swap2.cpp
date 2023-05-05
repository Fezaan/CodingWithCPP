#include<iostream>
using namespace std;

int main()
{
    int a,b,t;
    cout<<"Enter the number 1: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the number 2: ";
    cin>>b;
    cout<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"Swapped numbers are: "<<a<<" "<<b<<endl;
    return 0;
}