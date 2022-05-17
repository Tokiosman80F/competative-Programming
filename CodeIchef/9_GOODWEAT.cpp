#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int a[6],count1=0,count2=0;


		for (int i = 0; i <= 6; ++i)
		{
			cin>>a[i];

			if (a[i]==1)
			{
				count1++;
			}
			else{
				count2++;
			}
		}
		if (count1>count2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		


	}	
}