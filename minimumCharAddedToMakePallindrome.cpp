#include <bits/stdc++.h>
using namespace std;

int checkPall(string s){
    int n=s.length();
    int l=0,r=n-1;
    int count=0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else{
            count++;
            l=0;
            r=n-count-1;
        }
    }
    return count;
}


int main() {
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"The characters to be added to make the string pallindrome are: "<<checkPall(s);
    return 0;
}