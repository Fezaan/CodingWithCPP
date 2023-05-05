#include<bits/stdc++.h>
using namespace std;

void generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i=0;i<numRows;i++){
            v[i].resize(i+1);
            v[i][0]=v[i][i]=1;
            for(int j=1;j<i;j++){
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
        }
    }

int main(){
    vector<vector<int>> arr;
    int n;
    cout<<"Enter numer of rows of pascal triangle : ";
    cin>>n;
    cout<<"The pascal's triangle is: "<<endl;
    generate(n);
    return 0;
}