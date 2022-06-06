#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t,count1=0,count2=0;
	cin>>t;
	while(t--)
	{
		int a[9];
		for (int i = 0; i <=9; ++i)
		{
			cin>>a[i];
			if(i<=4)
			{
				count1=count1+a[i];
			}
			else{
				count2=count2+a[i];
			}
		}
		
		// if(count1>count2)
		// {
		// 	cout<<1<<endl;
		// }
		// else if (count1<count2)
		// {
		// 	cout<<2<<endl;
		// }
		// else{
		// 	cout<<0<<endl;
		// }
}
}