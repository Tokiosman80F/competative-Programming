#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--)
	{
		int hardness,tan;
		float carbon;
		cin>>hardness>>carbon>>tan;
		if (hardness>50 && carbon<0.7 &&tan>5600)
		cout<<10<<endl;

		else if (hardness>50 && carbon<0.7 )
		cout<<9<<endl;
		
		else if ( carbon<0.7 && tan>5600)
		cout<<8<<endl; 
		
		else if (hardness>50  && tan>5600)
		cout<<7<<endl;

		else if (hardness>50 || carbon<0.7 || tan>5600)
		cout<<6<<endl;
		
		else 
			cout<<5<<endl;
	}	
}