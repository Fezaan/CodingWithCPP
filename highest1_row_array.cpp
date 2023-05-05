#include<bits/stdc++.h>
using namespace std;

int maxindex(vector<vector<int>>&matrix, int i,int j){
    int maxrow=-1;
    int col=j-1;
    for(int k=0;k<i;k++){
        while(col>=0 && matrix[k][col]==1){
            col--;
            maxrow=k;
        }
    }
    return maxrow;
}

int main(){
    int n,m;
    cout<<"Enter the value of row and column: ";
    cin>>n>>m;
    vector<vector<int>> matrix;
    cout<<"Enter the 2D matrix : "<<endl;
    for(int i=0;i<n;i++){
        vector<int> row;
        for(int j=0;j<m;j++){
            int temp;
            cin>>temp;
            row.emplace_back(temp);
        }
        matrix.emplace_back(row);
    }
    cout<<"The row with max number of 1 is : "<<maxindex(matrix,n,m);
    return 0;
}