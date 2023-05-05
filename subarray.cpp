#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int arr[n];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"\nEnter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}