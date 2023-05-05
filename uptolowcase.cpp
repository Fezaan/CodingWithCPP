#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter uppercase char: ";
    cin>>ch;
    cout<<endl;
    ch=ch+32;
    cout<<"Your letter in lowercase is: "<<ch<<endl;
    return 0;
}