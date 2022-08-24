#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
	    int n,sum=0,ans;
	    cin>>n;
	    
	    for(int i=1;i<=n;i++)
	    {
	        sum=sum+i;
	        if(sum%2==0)
	        {
	        	
	        	ans=i;
	        }
	        
	     	
	    }
	    cout<<ans<<endl;
	}
    
}