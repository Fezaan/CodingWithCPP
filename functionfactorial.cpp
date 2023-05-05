#include<iostream>
using namespace std;
void fact(int a,int b){
    int x,y;
    x=y=1;
    for(int i=2;i<=a;i++)   x*=i;
    for(int i=2;i<=b;i++)   y*=i;
    cout<<"Factorial of number 1: "<<x<<endl;
    cout<<"Factorial of number 2: "<<y<<endl;
}
int main(){
    int n1,n2;
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;
    fact(n1,n2);
    return 0;
}