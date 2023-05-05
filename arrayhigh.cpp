#include<iostream>
using namespace std;
int main()
{
    int n,x,y,i;
    cout<<"Enter the no of students: ";
    cin>>n;
    cout<<endl;
    int a[100];
    for(i=1;i<=n;i++)
    {
        cout<<"Enter element "<<i<<" :";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
            x=a[i];
        else
            x=a[i+1];
    }
    cout<<"Highest marks are: "<<x;
    return 0;
}