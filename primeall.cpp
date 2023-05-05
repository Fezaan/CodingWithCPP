#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the limit: ";
    cin>>n;
    cout<<"Prime numbers are: ";
    for (i=2;i<=n;i++)
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
            cout<<i<<"\t";
    }
    return 0;
}