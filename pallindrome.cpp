#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,str1,str2;
    cin>>str;
    int n,f=0;
    n=str.length();
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}