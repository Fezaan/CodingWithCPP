//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
typedef pair<int, int> pii;

class Solution
{
public:
    vector<int> replaceWithRank(vector<int> &arr, int N)
    {
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        vector<int> res(N, 0);
        for (int i = 0; i < N; i++)
            pq.push({arr[i], i});
        int count = 1;
        while (!pq.empty())
        {
            int val = pq.top().first;
            res[pq.top().second] = count;
            pq.pop();
            if (val == pq.top().first)
                continue;
            else
                count++;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input

        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec, n);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends