#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int remainder,reverse=0,num1,num2;
		cin>>num1;
		num2=num1;
		while(num2!=0)
		{
			remainder=num2%10;
			reverse=reverse*10+remainder;
			num2= num2/10;

		}
		if (num1==reverse)

	cout<<"wins"<<endl;

	else
		cout<<"loses"<<endl;
}

}