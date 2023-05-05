#include<iostream>
using namespace std;
int add(int a,int b){
    return (a+b);
}
int main(){
    int n1,n2;
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;
    cout<<"Sum: "<<add(n1,n2)<<endl;
    return 0;
}