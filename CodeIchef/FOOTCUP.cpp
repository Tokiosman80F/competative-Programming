#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase,team1,team2;
	cin>>testCase;	
	while(testCase--)
	{
		cin>>team1>>team2;
		if(team1==team2 && (team1>0 && team2>0))
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}