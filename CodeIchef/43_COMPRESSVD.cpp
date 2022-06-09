#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[1000],size,count=1;
		cin>>size;

		for (int i = 0; i < size; ++i)
		{
			cin<<a[i]
		}
			for (int i = 0; i < size; ++i)
		{
			cout<<a[i]<<endl;
		}


		for (int i = 0; i < size; ++i)
		{
			if (a[i]!=a[i++])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}