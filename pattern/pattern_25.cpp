#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row=1;
	cin>>n;
	while(row<=n)
	{
		int col=n;
		int count=1;
		while(col<=n)
		{	

			cout<<count<<" ";
			col--;
			count++;


		}
		cout<<endl;
		row++;
	}	
}