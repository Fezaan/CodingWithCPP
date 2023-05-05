#include<bits/stdc++.h>
using namespace std;

double calcsqrt(int n, int p){
    double l=1, h=n, eps=1e-6;
    while((h-l)>eps){
        double mid=(l+h)/2;
        if(pow(mid,p)<n ) l=mid;
        else    h=mid;
    }
    return l;
}

int main(){
    int n,m;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the nth power: ";
    cin>>m;
    double x=calcsqrt(n,m);
    cout<<"The nth root of "<<n<<" is: "<<x<<endl;
    return 0;
}