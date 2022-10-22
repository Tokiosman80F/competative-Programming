#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7]={2,3,1,6,3,6,2};
	int num=-1;

		for(int i=0;i<7;i++)
		{	
			if(num<a[i])
			{
				a[i]=num;
			}

		}
		for(int i=0;i<7;i++)
		{
			cout<<a[i]<<" ";
		}

	
}