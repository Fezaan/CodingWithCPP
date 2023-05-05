#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int array[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
        sum+=array[i];
    }
    cout<<"Sum: "<<sum<<endl;
}