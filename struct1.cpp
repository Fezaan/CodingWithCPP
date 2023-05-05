#include<iostream>
using namespace std;

struct student
{
    char name[30];
    int rollno;
    float cgpa;
};

int main()
{
    student s;
    cout<<"Enter the name: ";
    gets(s.name);
    cout<<"Enter your roll call: ";
    cin>>s.rollno;
    cout<<"Enter your cgpa: ";
    cin>>s.cgpa;

    cout<<"Your details:"<<endl;
    cout<<s.name<<'\n'<<s.rollno<<'\n'<<s.cgpa;
    return 0;
}