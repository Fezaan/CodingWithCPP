#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100],y[100];
    int i;
    cout<<"Enter the text: ";
    gets(x);
    cout<<"Reversed string is: "<<strrev(x);
    return 0;
}