#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int dummy=1;

        for(int i=0;i<row;i++){
            if(matrix[i][0]==0) dummy=0;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=matrix[i][0]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
                for(int j=col-1;j>=1;j--){
                    if(matrix[i][0]==0 || matrix[0][j]==0)  matrix[i][j]=0;
                }
                if(dummy==0)    matrix[i][0]=0;
            }
        cout<<"The modified array is: "<<endl; 
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }

int main(){
    vector<vector<int>> arr;
    int n;
    cout<<"Enter the dimension of array : ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            v.emplace_back(tmp);
        }
        arr.emplace_back(v);
    }
    setZeroes(arr);
    return 0;
}