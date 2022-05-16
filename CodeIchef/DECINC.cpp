#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;

	cin>>num;
	if(num %4==0)
	{
		num++;
		cout<<num;
	}
	else
	{
		num--;
		cout<<num;
	}

}