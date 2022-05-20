#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int res,out=1;
		cin>>res;
for (int i = 1; i <res+1; ++i)
{
	out*=i;
}
		cout<<out<<endl;
		
}	
}