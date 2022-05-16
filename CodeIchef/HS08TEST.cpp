#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int withdraw;
	double balance;
	cin>>withdraw>>balance;

	if (withdraw % 5==0 && withdraw<=balance-0.50)
	{
		
		cout<<(balance-withdraw-0.50)<<endl;
	}
	else{
		cout<<balance<<endl;
	}

	
}