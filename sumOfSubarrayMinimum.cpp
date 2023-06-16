//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int sumSubarrayMins(int n, vector<int> &arr) {
        // code here
        long long mod=1e9+7;
        long long ans=0;
        stack<long long>s;
        for(int i=0;i<=n;i++){
            while(!s.empty() && (i==n || arr[s.top()]>=arr[i])){
                long long curr=s.top();
                s.pop();
                long long left=(s.empty()==1)? curr: curr-(s.top()+1);
                long long right=i-(curr+1);
                ans+=(right+1)*(left+1)*arr[curr];
            }
            s.push(i);
        }
        return ans%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.sumSubarrayMins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends