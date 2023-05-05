#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool f=true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"Prime"<<endl;
    }
    else    cout<<"Not Prime"<<endl;
    return 0;
}