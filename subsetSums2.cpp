//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
  void find(int index, vector<int> &nums, set<vector<int>> &res, vector<int> &ds){
      if(index==nums.size()){
          sort(ds.begin(), ds.end());
          res.insert(ds);
          return;
      }
      ds.emplace_back(nums[index]);
      find(index+1,nums,res,ds);
      ds.pop_back();
      
      find(index+1, nums,res,ds);
  }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        vector<vector<int>> res;
        set<vector<int>> s;
        vector<int> ds;
        find(0,nums,s,ds);
        for(auto it: s){
            res.emplace_back(it);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends