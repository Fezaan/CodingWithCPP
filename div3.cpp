#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers not divisible by "<<n<<": ";
    for(int i=1;i<=100;i++){
        if(i%n==0) continue;
        else cout<<i<<" ";
    }
}