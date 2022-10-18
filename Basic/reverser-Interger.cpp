#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,digit,ans=0,i=0;
	cin>>n;
	while(n!=0)
	{
		digit=n%10;
		ans=(digit*pow(10,i))+ans;
		i++;
		cout<<digit<<endl;
		cout<<"ans "<<ans<<endl;
		n=n/10;
	}	
}