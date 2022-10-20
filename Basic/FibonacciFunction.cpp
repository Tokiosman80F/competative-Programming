#include<bits/stdc++.h>
using namespace std;
int fibo(int number)
{
	int a=0,b=1;
	int sum;
	for(int i=1;i<number;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
	}	
 return sum;
}
int main()
{
		int num;
		cin>>num;
		cout<<"fibonachi series "<<fibo(num);
}