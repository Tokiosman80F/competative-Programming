/*
	A B C 
	B C D
	C D E
*/
#include<bits/stdc++.h>
/*
A B C D 
B C D E 
C D E F 

*/
using namespace std;
int main()
{
	int n,row=0;
	cin>>n;
	while(row<n)
	{
		int col=0;
		while(col<=n)
		{
		 char ch='A'+row+col;
		 cout<<ch<<" ";
		col++;
		}
		cout<<endl;
		row++;


	}
}