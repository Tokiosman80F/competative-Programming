#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	float x1,y1,x2,y2,d;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2>>d;

		float ans1,ans2;
		ans1=x1/x2;
		ans2=y1/y2;
		if(min(ans1,ans2)>d)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	} 	
}