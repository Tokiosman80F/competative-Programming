#include<bits/stdc++.h>
using namespace std;
int powerOf(int num,int n){
	int ans=1;

	for (int i = 1; i <= n; ++i)
	{
		/* code */
		ans=num*ans;
	}
	return ans;
}
int main()
{
	int number,power;
	cin>>number>>power;
	cout<<number<<" ^ "<<power<<" ="<<powerOf(number,power);	
}