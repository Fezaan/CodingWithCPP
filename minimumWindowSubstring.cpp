//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string t)
    {
        // Your code here
        
        int m=s.size();
        int n=t.size();
        
        // unordered_map<char,int>mp;
         vector<int>mp(256,0);
        int ans=INT_MAX;
        int start=0;
        int cnt=0;
        for(auto x:t){
            if(mp[x]==0)cnt++;
            mp[x]++;
        }
    
        int j=0;int i=0;
        while(j<s.length()){
            mp[s[j]]--;
            if(mp[s[j]]==0)cnt--;
            
            if(cnt==0){
                while(cnt==0){
                    if(ans>j-i+1){
                        ans=min(j-i+1,ans);
                        start=i;
                    }
                    
                    mp[s[i]]++;
                    if(mp[s[i]]>0)cnt++;
                    i++;
                }
            }
            j++;
            
        }
        return ans!=INT_MAX?s.substr(start,ans):"-1";

    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends