//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void find(int i,int j, vector<vector<int>> &m,int n, vector<string> &res, string ds, vector<vector<int>> & vis, vector< int> &di, vector< int > &dj){
        if(i==n-1 && j==n-1){
            res.emplace_back(ds);
            return;
        }
        string moves="DLRU";
        for(int ind=0;ind<4;ind++){
            int nexti=i+di[ind];
            int nextj=j+dj[ind];
            if(nexti >=0 && nextj >=0 && nexti<n && nextj<n && !vis[nexti][nextj] && m[nexti][nextj]==1){
                vis[i][j]=1;
                find(nexti,nextj,m,n,res,ds+moves[ind],vis,di,dj);
                vis[i][j]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> res;
        vector<vector<int>> vis(n,vector<int> (n,0));
        vector<int> di={1,0,0,-1};
        vector<int> dj={0,-1,1,0};
        if(m[0][0]==1)  find(0,0,m,n,res,"",vis,di,dj);
        return res;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends