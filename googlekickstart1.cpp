#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string i,p,s;
        cin>>i>>p;
        int x=p.length()-i.length();
        int k;
        for(int j=0, k=0;j<i.length();){
            if(i[j]==p[k]){
                s[j]=i[j];
                j++;k++;
            }
            else    k++;
        }
        bool f=true;
        for(int j=0;j<i.length();j++)
            if(i[j]!=s[j]){
                f=false;
                break;}
        if(f!=0)
            cout<<"IMPOSSIBLE"<<endl;
        else    cout<<x<<endl;
    }
    return 0;
}