#include<bits/stdc++.h>
using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> v;
        int top=0,bottom=m-1;
        int left=0,right=n-1;
        while(top<=bottom &&  left<=right){
            for(int i=left;i<=right;i++){
                v.emplace_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                v.emplace_back(matrix[i][right]);
            }
            right--;

            if(bottom>=top){
                for(int i=right;i>=left;i--){
                    v.emplace_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    v.emplace_back(matrix[i][left]);
                }
                left++;
            }
        }
        return v;
    }

int main(){
    vector<vector<int>> arr;
    vector<int> brr;
    int n;
    cout<<"Enter the size of array : ";
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
    brr=spiralOrder(arr);
    cout<<"The arrat in spiral order is: ";
    for(auto it: brr){
        cout<<" "<<it;
    }
    return 0;
}