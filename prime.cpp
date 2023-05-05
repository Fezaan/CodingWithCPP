#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int f=0;
    cout <<"Enter the number: ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            {
                cout<<"Not prime"<<endl;
                f=1;
            }
    }
    if(f==0)
    {
        cout<<"Prime"<<endl;
    }
    return 0;
}