#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    int y=0;
    cout<<"Enter thr text: ";
    gets(x);
    cout<<"Length of the text is: ";
    while(x[y]!='\0')
    {
        y++;
    }
    cout<<y;
    return 0;
}