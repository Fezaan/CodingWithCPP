#include<iostream>
using namespace std;


void dectobin(int n){
    int bin[32];
    int i=0;
    while(n>0){
        bin[i]=n%2;
        n/=2;
        i++;
    }
    cout<<"Number in binary: ";
    for(int j=i-1;j>=0;j--)
        cout<<bin[j];
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    dectobin(n);
    return 0;
}