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
    for (int i=0;i<n;i++)
    {
        cout<<"The element "<<i+1<<" is:";
        cout<<array[i]<<endl;
    }
    return 0;
}