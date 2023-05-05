#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[50],y[50],z;
    cout<<"Enter the text 1: ";
    gets(x);
    cout<<"Enter the text 2: ";
    gets(y);
    cout<<"Combined text is: "<<strcat(x,y);
    return 0;
}