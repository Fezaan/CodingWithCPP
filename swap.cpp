#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the number 1: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the number 2: ";
    cin>>b;
    cout<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapped numbers are: "<<a<<" "<<b<<endl;
    return 0;
}