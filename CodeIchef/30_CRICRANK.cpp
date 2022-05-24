#include<bits/stdc++.h>
using namespace std;

int main()
{	
 int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e,f,aa=0,bb=0;
		cin>>a>>b>>c>>d>>e>>f;
		if(a>d)aa++;
		else bb++;
		if(b>e)aa++;
		else bb++;
		if(c>f)aa++;
		else bb++;

		if (aa>bb)
		{
			cout<<"A"<<endl;
		}
		else{
			cout<<"B"<<endl;	
		}
	}
}