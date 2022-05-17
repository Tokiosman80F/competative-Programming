#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int a,b;
		cin>>a>>b;
		if(a>0 && b>0)
		{
			cout<<"Solution"<<endl;
		}
		else if (a==0 && b>0)
		{
			cout<<"Liquid"<<endl;
		}
		else{
			cout<<"Solid"<<endl;
		}
	}
	
}