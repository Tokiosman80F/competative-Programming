/*
 A B C
 D E F
 G H I
*/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row=1,count=0;
	cin>>n;
	while(row<=n)
	{
		int col=1;
		while(col<=n)
		{
			char ch='A'+count;
			cout<<ch<<" ";
			col++;
			count++;
		}
		cout<<endl;
		row++;
	}	
}