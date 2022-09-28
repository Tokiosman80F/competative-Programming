/*

 1 
 2 1
 3 2 1 
 4 3 2 1
 
*/ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,row=1,count;
	cin>>n;
	while(row<=n){
		int col=1;
		count=row;
		while(col<=row){
			cout<<count<<" ";
			count--;
			col++;
		}
		cout<<endl;
		row++;
	}	
}