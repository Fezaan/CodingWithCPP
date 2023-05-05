#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int m=0;
    while(n!=0){
        if(n<9){
            m+=n;
            break;
        }
        m+=n%10;
        n/=10;
        m*=10;
    }
    cout<<"Reverse number: "<<m<<endl;
    return 0;
}