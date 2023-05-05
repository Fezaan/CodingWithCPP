#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    int i;
    cout<<"Enter the text: ";
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    y[i]='\0';
    cout<<"Copied string is: "<<y;
    return 0;
}