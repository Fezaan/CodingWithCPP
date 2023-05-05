#include<iostream>
using namespace std;
int main()
{
    int sp,cp;
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<endl;
    cout<<"Enter the selling price: ";
    cin>>sp;
    cout<<endl;
    if((sp-cp)>0)
        cout<<"You had a profit of ";
    else
        cout<<"you had a loss of ";
    cout<<sp-cp<<endl;
    return 0;
}