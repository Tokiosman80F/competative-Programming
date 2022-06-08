#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t,count=0;
		cin>>t;
		while(t--)
		{
			int day;
			cin>>day;
			while(day--)
			{	

				int input;
				cin>>input;

				for (int i = 1; i < 31; ++i)
				{
					if(i%6==abs(1) || i%7==0 )
					{
						if (i!=input)
						{
							count++;
						}
						else{
							count=count;
						}
					}
				}
				cout<<count<<endl;

	}

	
		}
}