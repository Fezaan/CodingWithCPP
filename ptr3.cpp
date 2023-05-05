#include<iostream>
using namespace std;

int main()
{
    int *a,*b;
    int n,i;
    int array[100];
    cout<<"Enter the size of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
    }
    a=&array[n-1];
    b=&array[0];
    cout<<"Array in reverse order: ";
    while(&a>=&b)
    {
        cout<<*a<<'\t';
        a-=2;
    }
    return 0;
}