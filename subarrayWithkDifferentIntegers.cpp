//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int count(vector<int> &nums, int k)
    {
        int res = 0, l = 0, r = 0;
        int n = nums.size();
        unordered_map<int, int> mp;

        while (r < n)
        {
            mp[nums[r]]++;
            while (mp.size() > k)
            {
                mp[nums[l]]--;
                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
            }
            res += r - l + 1;
            r++;
        }

        return res;
    }
    int subarrayCount(vector<int> &nums, int n, int k)
    {
        // code here
        return count(nums, k) - count(nums, k - 1);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, k;
        cin >> N >> k;

        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution obj;
        cout << obj.subarrayCount(arr, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends