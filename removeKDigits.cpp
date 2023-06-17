//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        string res="";
        stack<char> st;
        if(s.length()==k)   return "0";
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            while(k && !st.empty() && st.top()>s[i]){
                k--;
                st.pop();
            }
            st.push(s[i]);
            if(st.size()==1 && s[i]=='0')   st.pop();
        }
        while(k && !st.empty()){
            k--;
            st.pop();
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        while(res[res.length()-1]=='0') res.pop_back();
        reverse(res.begin(),res.end());
        if(res.length()==0) return "0";
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends