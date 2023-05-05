#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter base: ";
    cin>>x;
    cout<<endl;
    cout<<"Enter the exponent: ";
    cin>>y;
    cout<<endl;
    cout<<"The final value is: "<<pow(x,y);
    return 0;
}