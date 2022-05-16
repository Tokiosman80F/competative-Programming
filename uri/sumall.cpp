#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int num,result=0;
		cin>>num;
		while(num>0)
		{
			int sum;
			sum=n%10;
			result=result+sum;
			num=num/10;

		}
		cout<<result<<endl;
	}

}