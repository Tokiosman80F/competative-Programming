/*
 
 * 
 * *
 * * *
 * * * *

*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int no,row=1,col;
	cin>>no;
	while(row<=no)
	{
		int col=1;
		while(col<=row)//<- col<row
		{
			cout<<"* ";
			col++;
		}
		cout<<endl;
		row++;

	}	
}