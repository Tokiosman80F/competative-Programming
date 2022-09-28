/*
 1 
 2 2
 3 3 3
 4 4 4 4 
*/ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row=1,no;
	cin>>no;
	while(row<=no)
	{
		int col=1;
		while(col<=row)
		{
			cout<<row<<" ";
			col++;
		}
		cout<<endl;
		row++;
	}	
}