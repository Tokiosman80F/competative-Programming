#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,digit,remain,ans=0,i=0;
	cin>>n;
	while(n!=0)
	{
		digit=n%10;
		ans=(digit*pow(2,i))+ans;
		i++;
		n=n/10;
	}
	cout<<ans<<endl;
}	