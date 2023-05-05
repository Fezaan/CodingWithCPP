#include<iostream>
using namespace std;
int main()
{
    int array[100];
    int n,sum;
    sum=0;
    cout<<"Enter the array size: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" :";
        cin>>array[i];
        sum+=array[i];
    }
    cout<<"Average of array is: "<<sum/n;
    return 0;
}