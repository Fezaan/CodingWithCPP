#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    int i,f=0;
    cout<<"Enter the text 1: ";
    gets(x);
    cout<<"Enter the text 2: ";
    gets(y);
    if(strcmpi(x,y))
        cout<<"Both the entered texts are same.";
    else
        cout<<"Texts entered are different.";
    return 0;
}