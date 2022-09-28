/*
	1 2 3
	4 5 6
	7 8 9
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int no,row=1,count=1;
	cin>>no;
	while(row<=no)
	{
		int col=1;
		while(col<=no)

		{
			cout<<count<<" ";
			count++;
			col++;
		}
		cout<<endl;
		row++;
	}	
}