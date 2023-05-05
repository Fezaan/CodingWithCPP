#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The sorted array is: ";
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(arr[j]<arr[i])
          {
              arr[j]=arr[j]+arr[i];
              arr[i]=arr[j]-arr[i];
              arr[j]=arr[j]-arr[i];
          }
      }
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}