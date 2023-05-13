//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int find(string str){
      vector<int> last(127,-1);
      int n=str.length();
      int arr[n+1];
      arr[0]=1;
      for(int i=1;i<=n;i++){
          arr[i]=2*arr[i-1];
          if(last[str[i-1]]!=-1)    arr[i]-=arr[last[str[i-1]]];
          last[str[i-1]]=i-1;
      }
      return arr[n];
  }
    string betterString(string str1, string str2) {
        // code here
        if(find(str1)<find(str2))   return str2;
        return str1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends