#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=10,a=0,b=1;
	cout<<a<<endl;
	cout<<b<<endl;
	for (int i = 1; i <=n; i++)
	{
		/* code */
		int sum=a+b;
		cout<<sum<<endl;
		a=b;
		b=sum;
	}

}