#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,ans=0;
	int digit;
	cin>>x;
	while(x!=0)
	{
		digit=x%10;
		
		if ((ans>INT_MAX/10)||(ans<INT_MIN/10))
		{
			/* code */
			return 0;
		}
		ans=(ans*10)+digit;
		x=x/10;
	}	
	cout<<ans;
}