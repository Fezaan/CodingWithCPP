//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int totalFruits(int n, vector<int> &fruits)
    {
        int len = 0, l = 0, r = 0, count = 0;

        unordered_map<int, int> mp;
        while (r < n)
        {
            mp[fruits[r]]++;
            while (mp.size() > 2)
            {
                mp[fruits[l]]--;
                if (mp[fruits[l]] == 0)
                    mp.erase(fruits[l]);
                l++;
            }
            len = max(len, r - l + 1);
            r++;
        }
        return len;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++)
            cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends