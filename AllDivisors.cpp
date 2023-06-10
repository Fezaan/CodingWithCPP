//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        set<int> s;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                s.insert(i);
                int tmp=n/i;
                s.insert(tmp);
            }
        }
        for(auto it: s) cout<<it<<" ";
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends