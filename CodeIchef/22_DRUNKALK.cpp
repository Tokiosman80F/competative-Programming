#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int k;
		cin>>k;
		if(k%2==0)
		{
			cout<<k<<endl;
		}
		else
		{
			cout<<k+2<<endl;
		}
	}
}