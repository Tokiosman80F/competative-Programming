#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,row=1,col=1;
	cin>>size;
	for (row = 1; row <=size; ++row)
		{
			for ( col= 1; col <=row; ++col)
			{
				cout<<"* ";
			}
			cout<<endl;
		}

}