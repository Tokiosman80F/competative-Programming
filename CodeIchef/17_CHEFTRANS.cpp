#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(x+y>z)
		{
			cout<<"TRAIN"<<endl;
		}
		else if(x+y<z)
		{
			cout<<"PLANEBUS"<<endl;
		}
		else{
					cout<<"EQUAL"<<endl;
		}

	}	
}