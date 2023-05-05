#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    cout<<"Enter thr text: ";
    gets(x);
    cout<<"Copied string is: "<<strcpy(y,x);
    return 0;
}