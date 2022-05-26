#include<bits/stdc++.h>
using namespace std;

int main()
{	
 int t;
	cin>>t;
	while(t--)
	{
		int p,m,v;
		cin>>p>>m>>v;
		if(p>1)
		{
			p=p-1;

			cout<<(m-p)*v<<endl;

		}
		else{
			cout<<m*v<<endl;
		}
	}
}