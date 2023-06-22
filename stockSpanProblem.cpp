//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(int price[], int n)
    {
        // Your code here
        vector<int> res;
        stack<int> st;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            index++;
            while (!st.empty() && price[st.top()] <= price[i])
                st.pop();
            if (st.empty())
            {
                st.push(i);
                res.push_back(index + 1);
                continue;
            }
            int nind = st.top();
            st.push(i);
            res.push_back(index - nind);
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
        int n;
        cin >> n;
        int i, a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        vector<int> s = obj.calculateSpan(a, n);

        for (i = 0; i < n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends