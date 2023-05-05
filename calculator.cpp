#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter the character: ";
    cin>>button;
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    switch(button){
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
        default: cout<<"Still learning more.";
    }
    return 0;
}