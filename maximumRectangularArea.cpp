//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
          vector<long long>vl;
        vector<long long >vr;
        vector<long long>res;
        
        stack<pair<long long,long long>>sl;
        stack<pair<long long,long long>>sr;

        //next smaller to left

        for(int i=0;i<n;i++){
            if(sl.size()==0){
                vl.push_back(-1);
                
            }
            else if(sl.size()>0&& sl.top().first<arr[i]){
                    vl.push_back(sl.top().second);
                }
            else if(sl.size()>0&& sl.top().first>=arr[i]){
                while(sl.size()>0 && sl.top().first>=arr[i]){
                    sl.pop();
                }
                if(sl.size()==0){
                    vl.push_back(-1);
                }
                else{
                    vl.push_back(sl.top().second);
                }
            }
           sl.push({arr[i], i}); 
        }

        //next smaller to right

        for(int i=n-1;i>=0;i--){
            if(sr.size()==0){
                vr.push_back(n);
            }
            else if(sr.size()>0 && sr.top().first<arr[i]){
                vr.push_back(sr.top().second);
            }
            else if(sr.size()>0 && sr.top().first>=arr[i]){
                while(sr.size()>0 && sr.top().first>=arr[i]){
                    sr.pop();
                }
                if(sr.size()==0){
                    vr.push_back(n);
                }
                else{
                    vr.push_back(sr.top().second);
                }
            }
            sr.push({arr[i], i});
        }
        
        reverse(vr.begin(), vr.end());
        
        //computation 

        for(int i=0;i<n;i++){
            res.push_back((vr[i]-vl[i]-1)*arr[i]);
            
        }
       long long ans=*max_element(res.begin(), res.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends