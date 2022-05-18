#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		char input;
		cin>>input;
		switch(input)
		{
			case 'B':
			case 'b':
			cout<<"BattleShip"<<endl;
			break;
			case 'C':
			case 'c':
			cout<<"Cruiser"<<endl;
			break;
			case 'd':
			case 'D':
			cout<<"Destroyer"<<endl;
			break;
			case 'F':
			case 'f':
			cout<<"Frigate"<<endl;
			break;
			
		}
	}
}