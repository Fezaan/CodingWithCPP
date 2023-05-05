#include<iostream>
using namespace std;
int fact(int a){
    int x=1;
    for(int i=2;i<=a;i++)   x*=i;
    return x;
}
int main(){
    int n,r;
    cout<<"Enter 2 numbers: ";
    cin>>n>>r;
    cout<<"Combination(nCr): "<<fact(n)/(fact(n-r)*fact(r))<<endl;
    return 0;
}