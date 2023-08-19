#include <bits/stdc++.h>
using namespace std;

int findOP(int len)
{
    int cnt = 0;
    while (len)
    {
        len /= 3;
        cnt++;
    }
    return cnt - 1;
}

int minOP(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;
    vector<bool> vis(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        if (!vis[ele])
        {
            vis[ele] = 1;
            int len = 1;
            ele = arr[ele];
            while (!vis[ele])
            {
                vis[ele] = 1;
                len++;
                ele = arr[ele];
            }
            int operations = findOP(len);
            int sz = pow(3, operations);
            if (sz != n)
                return -1;
            ans = max(ans, operations);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    cout << "The minimum operations required are: " << minOP(arr);
    return 0;
}