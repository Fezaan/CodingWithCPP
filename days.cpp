#include<iostream>
using namespace std;
int main()
{
    int x,d,y,m;    
    cout<<"Enter the days: ";
    cin>>x;
    cout<<endl;
    d=x%30;
    x-=d;
    x/=30;
    m=x%12;
    x-=m;
    y=x/12;
    cout<<"Years: "<<y<<" "<<"Months: "<<m<<" "<<"Days: "<<d<<endl;
    return 0;
}