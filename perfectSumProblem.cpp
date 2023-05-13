//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1000000007;
int solve(int ind,int sum,int arr[],vector<vector<int>>& dp){
         if(ind == 0){
            if(sum == 0 && arr[0] == 0){
                return 2;
            }
            else if(sum == 0 || arr[0] == sum) return 1;
            return 0;
        }
        if(dp[ind][sum]!=-1)return dp[ind][sum];
        int notpick = solve(ind-1,sum,arr,dp);
        int pick = 0;
        if(arr[ind]<=sum)pick = solve(ind-1,sum-arr[ind],arr,dp);
        return dp[ind][sum]=(pick+notpick)%mod;
    }
    int perfectSum(int arr[], int n, int sum)
    {
        // Your code goes here
        vector<vector<int>>dp(n,vector<int>(sum+1,0));
        // return solve(n-1,sum,arr,dp);
        for(int i=0;i<n;i++)dp[i][0]=1;
        if(arr[0]<=sum)dp[0][arr[0]]=1;
         if(arr[0]==0)dp[0][0] = 2;//if the first element is zero then we have to add 2 you can dry run by yourself;
        for(int i=1;i<n;i++){
            for(int s=0;s<=sum;s++){
                int notpick = dp[i-1][s];
                int pick =0 ;
                if(arr[i]<=s)pick=dp[i-1][s-arr[i]];
                dp[i][s]=(pick+notpick)%mod;
            }
        }
        return dp[n-1][sum];
    }
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends