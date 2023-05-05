#include<iostream>
using namespace std;
int main()
{
    int x,y,f;
    f=0;
    cout<<"Enter the number: ";
    cin>>x;
    while(x!=0)
    {
        y=x%10;
        x/=10;
        f++;
    }
    cout<<"Number of digits: "<<f<<endl;
    return 0;
}