#include<iostream>
using namespace std;
int main()
{
    int a1[100],even[50],odd[50];
    int i,n,j,k;
    j=k=0;
    cout<<"Enter the array size: ";
    cin>>n;
    for (i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" :";
        cin>>a1[i];
    }
    for(i=0;i<n;i++)
    {
        if(a1[i]%2==0)
        {
            even[j]=a1[i];
            j++;
        }
        else
        {
            odd[k]=a1[i];
            k++;
        }
    }
    cout<<"Even array is: ";
    for(i=0;i<j;i++)
        cout<<even[i]<<"\t";
    cout<<endl;
    cout<<"Odd array is: ";
    for(i=0;i<k;i++)
        cout<<odd[i]<<"\t";
    return 0;
}