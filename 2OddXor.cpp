//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        // 101
        // 001
        // 100
        
        // 100 100 000
        // 000 010 010
        // 010 100 110
        // 110 101 011
        // 011 010 001
        // 001 011 010
        // 010 011 001
        // 001 001 000
        
        int a=0,b=0,x=0;
        for(int i=0;i<N;i++)    x^=Arr[i];
        x&=(~(x-1));
        for(int i=0;i<N;i++){
            if(Arr[i]&x)    a^=Arr[i];
            else    b^=Arr[i];
        }
        if(a>b) return {a,b};
        return {b,a};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends