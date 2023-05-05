#include<iostream>
using namespace std;
int main()
{
    int array[100];
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" :";
        cin>>array[i];
    }
    cout<<"Array in reverse order."<<endl;
    for (int i=n-1;i>=0;i--)
    {
        cout<<"The element "<<i<<" is:";
        cout<<array[i]<<endl;
    }
    return 0;
}