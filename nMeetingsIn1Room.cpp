//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(const pair<int, int> p1, const pair<int, int> p2)
    {
        return p1.second < p2.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>> sch;
        int cnt = 0, last = -1;
        for (int i = 0; i < n; i++)
        {
            sch.push_back({start[i], end[i]});
        }
        sort(sch.begin(), sch.end(), cmp);
        for (auto it : sch)
        {
            if (it.first > last)
            {
                cnt++;
                last = it.second;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends