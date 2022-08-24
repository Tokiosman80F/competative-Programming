#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int n,fruit,veg,fish;
		cin>>n>>fruit>>veg>>fish;
		if(veg>=n && n<=fruit+fish)
	    cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}	
}