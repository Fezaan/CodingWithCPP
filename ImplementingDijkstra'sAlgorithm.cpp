//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    vector<int> dijkstra(int n, vector<vector<int>> adj[], int src)
    {
        // Code here
        vector<int> dist(n, INT_MAX);
        vector<int> parent(n);
        for (int i = 0; i < n; i++)
            parent[i] = i;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, src});
        dist[src] = 0;
        while (!pq.empty())
        {
            auto peir = pq.top();
            int node = peir.second;
            int dis = peir.first;
            pq.pop();

            for (auto it : adj[node])
            {
                int newNode = it[0];
                int wt = it[1];
                if (dis + wt < dist[newNode])
                {
                    dist[newNode] = wt + dis;
                    pq.push({wt + dis, newNode});
                    parent[newNode] = node;
                }
            }
        }
        return dist;
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
        vector<vector<int>> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin >> S;

        Solution obj;
        vector<int> res = obj.dijkstra(V, adj, S);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends