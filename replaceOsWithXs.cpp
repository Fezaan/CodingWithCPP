//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
private:
    void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<char>> &board)
    {
        vis[i][j] = 1;
        int n = board.size();
        int m = board[0].size();
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};
        for (int k = 0; k < 4; k++)
        {
            int r = i + delRow[k];
            int c = j + delCol[k];
            if (r < n && r >= 0 && c < m && c >= 0 && !vis[r][c] && board[r][c] == 'O')
            {
                dfs(r, c, vis, board);
            }
        }
    }

public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> board)
    {
        // code here
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            if (board[i][0] == 'O' && !vis[i][0])
            {
                dfs(i, 0, vis, board);
            }
            if (board[i][m - 1] == 'O' && !vis[i][m - 1])
            {
                dfs(i, m - 1, vis, board);
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (board[0][i] == 'O' && !vis[0][i])
            {
                dfs(0, i, vis, board);
            }
            if (board[n - 1][i] == 'O' && !vis[n - 1][i])
            {
                dfs(n - 1, i, vis, board);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == 0 && board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
        return board;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends