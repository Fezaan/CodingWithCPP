//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    // bool isPrime(int n) 
    // { 
    //     // Corner case 
    //     if (n <= 1) 
    //         return false; 
    
    //     // Check from 2 to n-1 
    //     for (int i = 2; i < n; i++) 
    //         if (n % i == 0) 
    //             return false; 
    
    //     return true; 
    // }
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        if(N==2)    return {2};
	    vector<bool> arr(N+1,true);
	    for(int i=2;i<=sqrt(N);i++){
	        if(arr[i]){
	            for(int j=i*i;j<=N;j+=i)
	                arr[j]=false;
	        }
	    }
	   // if(isPrime(N))  arr[N]=false;
	    vector<int> res;
	    for(int i=2;i<=N;i++){
	        if(arr[i])  res.emplace_back(i);
	    }
	    return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends