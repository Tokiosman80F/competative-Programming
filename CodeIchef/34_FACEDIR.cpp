#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,dir;
	cin>>t;
	while(t--)
	{	
		int output;
		cin>>dir;
		if(dir>=4)
		{
			output=dir%4;
			switch(output)
			{
				case 0:
				cout<<"NORTH"<<endl;
				break;
				case 1:
				cout<<"EAST"<<endl;
				break;
				case 2:
				cout<<"SOUTH"<<endl;
				break;
				case 3:
				cout<<"WEST"<<endl;
				break;
			}	


		}
		else{
			switch(dir)
			{
				case 0:
				cout<<"NORTH"<<endl;
				break;
				case 1:
				cout<<"EAST"<<endl;
				break;
				case 2:
				cout<<"SOUTH"<<endl;
				break;
				case 3:
				cout<<"WEST"<<endl;
				break;
			}
		}
		
	}	
}