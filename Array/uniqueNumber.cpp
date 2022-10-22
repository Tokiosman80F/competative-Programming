#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[9]={2,3,10,6,3,6,2,3,3};
	int ans=0;

	for(int i=0;i<7;i++)
	{
		ans=ans^a[i];
	}
	
	cout<<ans;	

	
}