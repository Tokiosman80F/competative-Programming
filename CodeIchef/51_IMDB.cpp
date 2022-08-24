#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
	    int n,space,ans=0;
	    cin>>n>>space;
	   while(n--)
	   {
	       int s,r;
	       cin>>s>>r;
	       if(s<=space)
	        ans=max(ans,r);    
	   }
	   cout<<ans<<endl;
	    
	}
}