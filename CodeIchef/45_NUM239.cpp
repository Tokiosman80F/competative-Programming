#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int num1,num2,count=0;
		cin>>num1>>num2;

		for (int i = num1; i <=num2 ; ++i)
		{
			
					if(i%10==2||i%10==3||i%10==9)
					{
						count++;
					}
				
				

		}
		cout<<count<<endl;
	}	
}