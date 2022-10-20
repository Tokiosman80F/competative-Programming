#include<bits/stdc++.h>
using namespace std;

int factorial(int num)
{
	int fac=1;
	for(int i=1;i<=num;i++)
	{	
		fac=fac*i;
	}
	return fac;
}
int nCr(int n,int r)
{
	int nueo=factorial(n);
	int deno=factorial(r)*factorial(n-r);
	return nueo/deno;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"nCr = "<<nCr(a,b); 	
}