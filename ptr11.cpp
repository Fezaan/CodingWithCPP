//Q1

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    int *a,*b;
    cout<<"Enter variable 1: ";
    cin>>x;
    cout<<"Enter variable 2: ";
    cin>>y;
    a=&x;
    b=&y;
    cout<<"The sum is: "<<*a+*b;
    return 0;
}



//Q2

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    int *a,*b;
    cout<<"Enter variable 1: ";
    cin>>x;
    cout<<"Enter variable 2: ";
    cin>>y;
    a=&x;
    b=&y;
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    cout<<"Variable 1: "<<*a<<endl;
    cout<<"Variable 2: "<<*b;
    return 0;
}



//Q3