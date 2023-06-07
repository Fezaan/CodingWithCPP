//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long x, long long y) 
    {
        //code here
        int sign=1;
        if(x*y <0)  sign=-1;
        x=abs(x);
        y=abs(y);
        long long int z=0,tmp=0;
        for(int i=31;i>=0;i--){
            if(tmp+ (y<<i) <= x){
                z+=1LL<<i;
                tmp+=(y<<i);
            }
        }
        return z*sign;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends