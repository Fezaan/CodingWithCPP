#include<bits/stdc++.h>
using namespace std;

double calcsqrt(int n){
    double l=1, h=n, eps=1e-3;
    while((h-l)>eps){
        double mid=(l+h)/2;
        if(mid*mid<n)  l=mid+1;
        else    h=mid-1;
    }
    return h;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    double x=calcsqrt(n);
    cout<<"The square root of "<<n<<" is: "<<x<<endl;
    return 0;
}