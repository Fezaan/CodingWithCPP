#include<iostream>
using namespace std;
int main()
{
    int n,m,l;
    cin>>n>>m>>l;
    int a[n][m], b[m][l];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<l;j++)
            cin>>a[i][j];

    int ans[n][l];
    for(int i=0;i<n;i++)
        for(int j=0;j<l;j++)
            for(int k=0;k<m;k++)
            {
                ans[i][j]=a[i][k]*b[k][l];
            }
    
    for(int i=0;i<n;i++)
        for(int j=0;j<l;j++)
            {cout<<a[i][j]<<" ";
            }
        cout<<endl;
    return 0;
}