#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int x1,x2,y1,y2,z1,z2;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		if (x1<=x2 && y1<=y2 && z1>=z2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}