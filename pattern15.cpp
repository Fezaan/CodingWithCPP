#include<iostream>
using namespace std;
int main()
{   int i,j,k;
    k=1;
    for(i=1;i<=5;i++)
    {
            for(j=1;j<=i;j++)
            {
                if((i+j+1)%2==1)
                {
                    cout<<(i+j+1)%2<<" ";
                }
                else
                {
                    cout<<(i+j+1)%2<<" ";
                }
            }
       cout<<endl;
    }
    return 0;
}