#include<iostream>
using namespace std;
bool pythagorus(int a, int b,int c){
    int x,y,z;
    x=max(a,max(b,c));
    if(x==a){
        y=b;z=c;
    }
    else if(x==b){
        y=a;z=c;
    }
    else{
        y=a;z=c;
    }
    if(a*a==(b*b+c*c))  return true;
    return false;
}
int main(){
    int a,b,c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    if(pythagorus(a,b,c))   cout<<"It is a pythagorian triplet."<<endl;
    else    cout<<"Not a pythagorian triplet."<<endl;
    return 0;
}