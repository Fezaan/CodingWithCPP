#include<iostream>
using namespace std;
int comb(int i,int j){
    int fact(int a);
    int x=fact(i)/(fact(i-j)*fact(j));
    return x;
}
int fact(int a){
    int x=1;
    for(int i=2;i<=a;i++)   x*=i;
    return x;
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<" "<<comb(i,j);
        cout<<endl;
    }
    return 0;
}