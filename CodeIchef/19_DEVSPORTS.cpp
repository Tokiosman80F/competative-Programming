#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int z,y,a,b,c;
		cin>>z>>y>>a>>b>>c;
		int remain,ride;
		remain=z-y;
		ride=a+c+b;
		if(remain>=ride)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}