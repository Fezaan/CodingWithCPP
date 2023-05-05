#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    int n;
    cout<<"Enter the text: ";
    gets(x);
    n=strlen(x);
    for (int i=0;i<n/2;i++)
    {
        swap(x[i],x[n-i-1]);
    }
    cout<<"Reversed string is: "<<x;
    return 0;
}