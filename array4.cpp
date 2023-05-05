#include<iostream>
using namespace std;
int main()
{
    int array[100];
    int n,x,f;
    f=0;
    cout<<"Enter the array size: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" :";
        cin>>array[i];
    }
    cout<<"Enter the number to be found: ";
    cin>>x;
    for (int i=0;i<n;i++)
    {
        if(x==array[i])
        {
            f=1;
            cout<<"Element found at index "<<i;
        }
    }
    if(f==0)
        cout<<"Element not found.";
    return 0;
}