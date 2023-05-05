#include <iostream>
using namespace std;
int main()
{
    int i,a,b;
    cout<<"Enter the begin limit: ";
    cin>>a;
    cout<<"Enter the end limit: ";
    cin>>b;
    cout<<"Prime numbers are: ";
    for (i=a;i<=b;i++)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            } 
        }
        if(j==i)
            cout<<i<<" ";
    }
    return 0;
}