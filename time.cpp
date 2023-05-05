#include<iostream>
using namespace std;
int main()
{
    int x,s,h,m;    
    cout<<"Enter the seconds: ";
    cin>>x;
    cout<<endl;
    s=x%60;
    x-=s;
    x/=60;
    m=x%60;
    x-=m;
    h=x/60;
    cout<<"Hours: "<<h<<" "<<"Minutes: "<<m<<" "<<"Seconds: "<<s<<endl;
    return 0;
}