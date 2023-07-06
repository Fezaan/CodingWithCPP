//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    template <class T>
    static void input(vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

// } Driver Code Ends

class Solution
{
public:
    int stockBuyAndSell(int n, vector<int> &prices)
    {
        // code here
        prices.push_back(0);
        int profit = 0;
        int low = prices[0];
        for (int i = 0; i < n; i++)
        {
            if (prices[i + 1] < prices[i])
            {
                profit += prices[i] - low;
                low = prices[i + 1];
            }
        }
        prices.pop_back();
        return profit;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);

        vector<int> prices(n);
        Array::input(prices, n);

        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);

        cout << res << endl;
    }
}

// } Driver Code Ends