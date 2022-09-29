/*
 A 
 B C
 D E F
*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row=1,count=0 ;
	cin>>n;
	while(row<=n)
	{
		int col=1;
		while(col<=row)
		{
			cout<<char(65+count)<<" ";
			col++;
			count++;
		}
		cout<<endl;
		row++;
	}	
}