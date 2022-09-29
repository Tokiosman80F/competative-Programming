/*
 D 
 C D 
 B C D 
 A B C D 
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
		while(col<=row)
		{
		char ch='A'+(n-1)-row+col;
		cout<<ch<<" ";
		col++;
		}
	cout<<endl;
	row++;
}
}


