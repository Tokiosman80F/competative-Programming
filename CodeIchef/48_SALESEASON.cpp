#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase,amount;
	cin>>testCase;
	while(testCase--)
	{
		cin>>amount;
		if (amount<=100)
		{
			cout<<amount<<endl;
		}
		else if (amount>=101 && amount<=1000)
		{
			cout<<amount-25<<endl;
		}
			else if (amount>=1001 && amount<=5000)
		{
			cout<<amount-100<<endl;
		}	else if (amount>5000)
		{
			cout<<amount-5000<<endl;
		}
	}	
}