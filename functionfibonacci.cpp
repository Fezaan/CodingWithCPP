#include<iostream>
using namespace std;
void fibonacci(int n){
    int x=0,y=1;
    for(int i=0;i<n;){
        cout<<x;
        i++;
        if(n==i) break;
        cout<<" "<<y<<" ";
        i++;
        x=x+y;
        y=y+x;
    }
}
int main(){
    int n;
    cout<<"Enter the length: ";
    cin>>n;
    fibonacci(n);
    return 0;
}