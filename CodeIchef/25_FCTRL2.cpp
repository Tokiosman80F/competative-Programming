#include<bits/stdc++.h>
using namespace std;
int main()
{	
 int t;
	cin>>t;
	while(t--)
	{
		int a,sum=1;
		cin>>a;
		for (int i = a; i > 0; i--)
		
			sum=i*sum;
		
		cout<<sum<<endl;

	}
	
}