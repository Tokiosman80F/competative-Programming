#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase,hasPoint,playoff,gameLeft;
//win= 2 point draw=1 point
	cin>> testCase;
	while(testCase--)
	{
		cin>>hasPoint>>playoff>>gameLeft;

		if(hasPoint+ (gameLeft*2)>=playoff || hasPoint+ (gameLeft*1)>=playoff)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}