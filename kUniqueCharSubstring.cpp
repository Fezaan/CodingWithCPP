//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int res = -1, cnt = 0, l = 0, r = 0;
        unordered_map<char, int> mp;

        while (r < s.length())
        {
            cnt++;
            mp[s[r]]++;
            if (mp.size() == k)
            {
                res = max(res, cnt);
            }
            else if (mp.size() > k)
            {
                while (mp.size() != k)
                {
                    cnt--;
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                        mp.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends