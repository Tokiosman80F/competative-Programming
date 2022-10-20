#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
	int factorial=1;
	for(int i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
};
int nPr(int n,int r){
	int neo=factorial(n);
	int deno=factorial(n-r);
	return neo/deno;
};
int main()
{
		int num1,num2;
		cin>>num1>>num2;
		cout<<"nPr "<<nPr(num1,num2);
}