#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row=1,n;
	cin>>n;
	while(row<=n)
	{
		int col=1;
		while(col<=row)
		{
			cout<<"*";
			col++;

		}
		cout<<endl;
		row++;
	}

}	