#include<iostream>
using namespace std;

class student
{
    private:
        char name[30];
        int rollno;
        float cgpa;
    public:
        void input();
        void output();
};

void student::input()
{
    cout<<"Enter the name: ";
    gets(name);
    cout<<"Enter your roll call: ";
    cin>>rollno;
    cout<<"Enter your cgpa: ";
    cin>>cgpa;
}
void student::output()
{
    cout<<"NAME: "<<name<<'\n';
    cout<<"ROLL NO.: "<<rollno<<'\n';
    cout<<"CGPA: "<<cgpa;
}

int main()
{
    student s;
    s.input();
    cout<<"Your details:"<<endl;
    s.output();
    return 0;
}