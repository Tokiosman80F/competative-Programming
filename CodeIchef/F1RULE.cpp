#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	double timeCase,time1,time2;
	cin>>timeCase;
	while(timeCase--)
	{
		cin>>time1>>time2;
		if(time1*1.07<time2)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}

}