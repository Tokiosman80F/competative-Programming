#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int H,x,y,C;
		cin>>H>>x>>y>>C;

		y=y/2;

		if ((y+x)*H>C)
		{
					cout<<"NO"<<endl;
		}
		else{
		
			cout<<"YES"<<endl;
		}
	}	
}