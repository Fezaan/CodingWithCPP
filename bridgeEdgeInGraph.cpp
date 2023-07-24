//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    int timer = 1;

public:
    // Function to find if the given edge is a bridge in graph.
    int dfs(int V, vector<int> adj[], int source, vector<bool> &vis, int &d)
    {
        for (int child : adj[source])
        {
            if (child == d)
                return 0;
            if (vis[child])
                continue;

            vis[child] = true;
            if (dfs(V, adj, child, vis, d) == 0)
                return 0;
        }
        return 1;
    }
    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        // Code here
        vector<bool> vis(V, false);
        vis[c] = true;

        for (int child : adj[c])
        {
            if (child == d)
                continue;
            if (dfs(V, adj, child, vis, d) == 0)
                return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

// } Driver Code Ends