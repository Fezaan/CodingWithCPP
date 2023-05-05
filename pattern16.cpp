#include<iostream>
using namespace std;
int main()
{   int i,j,k;
    k=1;
    for(i=1;i<=10;i++)
    {
            for(j=1;j<=i;j++)
            {
                cout<<i*j<<" ";
            }
       cout<<endl;
    }
    return 0;
}