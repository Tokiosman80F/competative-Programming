/*
 A A A 
 B B B
 C C C
*/ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row=1;
	cin>>n;
	while(row<=n)
	{
		int col=1;
		while(col<=n){
			cout<<char(64+row)<<" ";
			col++;
		}
		cout<<endl;
		row++;
	}
}