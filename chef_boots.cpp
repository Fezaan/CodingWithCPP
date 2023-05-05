#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,ans=0;
	    cin>>n>>m;
	    if(m<n) ans+=(n-m);
	    ans+=n;
	    cout<<ans<<endl;
	}
	return 0;
}