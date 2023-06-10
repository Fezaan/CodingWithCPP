//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool prime[1000000];
    void fun(int n) { 
// first create seive and mark all the prime numebrs
            for(int i=2;i<=n;i++){
                prime[i]=true;
              }
        
            for(int i=2;i*i<=n;i++){
                if(prime[i]==true){
                    for(int j=i*i ; j<=n;j+=i){
                         prime[j]=false;
                    }
             }
         }
        
    }
    void sieve() {
       
        
    }

    vector<int> findPrimeFactors(int n) {

        // Write your code here
        fun(n);
        
        vector<int> ans;
        
        for(int i=2;i<=n;++i){
                if(prime[i]==1){ 
                    while(n%i==0){ 
// when you find prime number divide it as many time as possible 
                        n/=i;
                        ans.push_back(i);
                    }
                }
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.sieve();
        vector<int> vec = obj.findPrimeFactors(n);
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends