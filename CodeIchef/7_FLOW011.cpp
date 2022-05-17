#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  testCase;
	

cin>>testCase;
while(testCase--)
{	
	long double bs,hra,da,gross;
	long double salary;

	cin>>salary;


	if (salary<1500)
	{
		hra=salary*0.1;
		da=salary*0.9;

		cout<<fixed<<setprecision(2)<<salary+hra+da<<endl;
	}
	else{

		hra=500;
		da=salary*0.98;

		cout<<fixed<<setprecision(2)<<salary+hra+da<<endl;	
	}
}
}