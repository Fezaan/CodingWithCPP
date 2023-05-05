#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    int y;
    cout<<"Enter thr text: ";
    gets(x);
    cout<<"Length of the text is: ";
    y=strlen(x);
    cout<<y;
    return 0;
}