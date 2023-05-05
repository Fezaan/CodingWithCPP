#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the size of rectangle: ";
    cin>>a>>b;
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==a||i==1||j==b||j==1) cout<<" *";
            else    cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}