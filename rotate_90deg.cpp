#include<bits/stdc++.h>
using namespace std;

void Rotate90deg(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        cout<<"The rotated array is: "<<endl; 
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
    Rotate90deg(arr);
    return 0;
}