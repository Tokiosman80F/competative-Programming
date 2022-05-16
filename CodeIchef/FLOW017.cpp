#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase,a[1000];
	cin>>testCase;
	while(testCase--)
	{
	
		for (int i = 0; i < 3; ++i)
		{
				cin>>a[i];
		}

		sort(a,a+3);
		cout<<a[1]<<endl;
	}
	
}