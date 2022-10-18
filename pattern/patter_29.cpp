#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,row,col;
	cin>>size;
	for ( row = 1; row<= size; ++row)
		{
			for (col= 1; col <= size; ++col)
			{
				int count=size;
				if(col=count)
				{
					cout<<"*";
					count--;
				}
				else
					cout<<" ";
			}
			cout<<endl;
		}	
}