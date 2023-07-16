#include <bits/stdc++.h>
/*

    1. Consider taking input, output using fast Input-Output
    2. Include the essential imports only

*/

#include <iostream>

using namespace std;

// bool detect(int src, vector<int> adj[], int vis[]){
// 	vis[src]=1;
// 	queue<pair<int, int>> q;
// 	q.push({src, -1});
// 	while(!q.empty()){
// 		int node=q.front().first;
// 		int parent=q.front().second;
// 		q.pop();

// 		for(auto it: adj[node]){
// 			if(!vis[it]){
// 				vis[it]=1;
// 				q.push({it,node});
// 			}
// 			else if(parent!=it)	return true;
// 		}
// 	}
// 	return false;
// }

bool dfs(int node, int parent, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(it, node, adj, vis))
                return true;
        }
        else if (parent != it)
            return true;
    }
    return false;
}

bool findCycle(vector<int> adj[], int n)
{
    int vis[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, -1, adj, vis))
                return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*
        1. You have to take the input by yourself as mentioned in the input format.
        2. You have to print the output by yourself as per the output format mentioned.
        3. You may start writing your code below this multi-line comments section.
    */
    int v, e;
    cin >> v >> e;
    vector<int> adj[v + 1];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // for(auto it: adj){
    // 	for(auto j: it)	cout<<j<<" ";
    // 	cout<<endl;
    // }
    findCycle(adj, v) ? cout << "True" << endl : cout << "False" << endl;
    return 0;
}
