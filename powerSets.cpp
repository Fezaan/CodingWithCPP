//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n=s.size();
		    vector<string> res;
		    for(int i=1;i<(1<<n);i++){
		        string x="";
		        for(int j=0;j<n;j++){
		            if(i&(1<<j))    x+=s[j];
		        }
		        res.emplace_back(x);
		    }
		    sort(res.begin(),res.end());
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends