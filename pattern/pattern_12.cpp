/*
 1 
 2 3 
 3 4 5
 4 5 6 7
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row=1,count;
	cin>>n;
	while(row<=n)
	{	
		count=row;
		int col=1;
		while(col<=row)
		{
			cout<<count<<"  " ;
			count++;
			col++;
		}
		cout<<endl;
		row++;
	} 	
}