#include <iostream>
#include<cmath>
using namespace std;


int main() {
	// your code goes here
	int t;
    cout<<"Testcases: ";
    cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,x;
        cout<<"Size: ";
	    cin>>n;
	    int arr[n];
	    int f=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	        x=arr[j];
	        while(x!=0)
	        {
	            x-=(x%10);
	            x/=10;
	            f++;
	        }
	    }
	    int k=0;
	    for(int j=2;j<sqrt(f);j++)
	    {
	        if(f%j==0)
	        {
	            k++;
	            break;
	        }
	    }
	    if(k==0)
	        cout<<"yes";
	    else
	        cout<<"no";
	    
	}
	return 0;
}
