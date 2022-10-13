#include<bits/stdc++.h>
using namespace std;
int main()
{
	int input,product=1,sum=0,result,rem;
	cin>>input;
	while(input!=0)
	{
		rem=input%10;
		product=rem*product;
		sum=rem+sum;
		input=input/10;
	}
	result=product-sum;
	cout<<result<<endl;
}