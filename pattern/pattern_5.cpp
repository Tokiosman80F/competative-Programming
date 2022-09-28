#include<bits/stdc++.h>
using namespace std;
int main()
{
	int no,row=1;
	cin>>no;
	while(row<=no)
	{
		int col=1;
		while(col<=no)
		{
			cout<<"|";
			col++;
		}
		cout<<endl;
		row++;
	}	
}