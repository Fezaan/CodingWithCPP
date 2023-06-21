//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int ans=0,j=0;
        int mp[257]={0};
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]<=j){
                ans=max(ans,i-j+1);
                mp[s[i]]=i+1;
            }
            else{
                j=mp[s[i]];
                mp[s[i]]=i+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends