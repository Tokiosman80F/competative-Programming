#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase,a,b,c;
	cin>>testCase;
	while(testCase--)
	{
		cin>>a>>b>>c;
		int d=min({a,b,c});
		if(d==a)
		{
			cout<<"Draw"<<endl;
		}
		else if(d==b)
		{
			cout<<"Bob"<<endl;
		}
		else{

			cout<<"Alice"<<endl;

		}
	}	
}