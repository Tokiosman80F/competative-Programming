#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		double x,y;
		cin>>x>>y;
		if(x>1000)
		{
			cout<<fixed<<setprecision(5)<<(x*y)-(x*y)*0.10<<endl;
		}
		else{
			cout<<fixed<<setprecision(5)<<x*y<<endl;
		}
	}
}