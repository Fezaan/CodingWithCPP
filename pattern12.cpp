#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        int k=i;
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=n-i;j<=n-1;j++){
            cout<<" "<<k--;
        }
        k=2;
        for(int j=n-1;j<n+i-2;j++){
            cout<<" "<<k++;
        }
        cout<<endl;
    }
    return 0;
}