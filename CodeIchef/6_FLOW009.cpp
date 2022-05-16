#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	double quantity,price;

	cin>>testCase;
	while(testCase--)
	{
		cin>>quantity>>price;
		if(quantity>1000)
		{
			cout<<(quantity*price)*0.1<<endl;
		}
		else{
			cout<<quantity*price<<endl;
		}
	}	
}