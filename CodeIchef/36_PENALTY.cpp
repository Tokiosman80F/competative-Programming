#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{	
		int count1=0,count2=0;
		int a;
		for (int i = 0; i <=9; ++i)
		{
			cin>>a;
			if(i%2==0)
			{
				count1=count1+a;
			}
			else{
				count2=count2+a;
			}
		}
		if(count1>count2)
		{
			cout<<1<<endl;
		}
		else if (count1<count2)
		{
			cout<<2<<endl;
		}
		else{
			cout<<0<<endl;
		}

		

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

