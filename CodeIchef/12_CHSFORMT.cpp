#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int a,b,sum;
		cin>>a>>b;
		sum=a+b;
		if(sum<3)
			{cout<<1<<endl;}
		
		else if (sum>=3 && sum<=10)
			{cout<<2<<endl;}

		else if (sum>=11 && sum<=60)
			{cout<<3<<endl;}
		else if(sum>60 )
			{cout<<4<<endl;}
	}	
}