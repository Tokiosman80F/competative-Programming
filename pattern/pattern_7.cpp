/*
	3 2 1
	3 2 1
	3 2 1
*/ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int no,row=1;
	cin>>no;
	while (row<=no)
	{
		int col=1;
		while(col<=no)
		{
			cout<<no +1-col<<" ";
			col++;
		}
		cout<<endl;
		row++;
	}	
}