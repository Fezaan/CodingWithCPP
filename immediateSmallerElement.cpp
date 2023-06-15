//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    stack<int> st;
	    vector<int> res;
	    st.push(arr[0]);
	    for(int i=1;i<n;i++){
	        if(arr[i]<st.top()){
	            res.push_back(arr[i]);
	            st.pop();
	        }else{
	            res.push_back(-1);
	        }
	        st.push(arr[i]);
	    }
	    res[n-1]=-1;
	    for(int i=0;i<n;i++)    arr[i]=res[i];
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends