#include<bits/stdc++.h>
using namespace std;

int count(int num){
	int count=0;
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;
		}

	}
	return count;
}
int setBit(int num1,int num2)
{
	return count(num1)+count(num2);
}

int main()
{
	int num1,num2;
	cin>>num1>>num2;
	cout<<"the number of setBit "<<setBit(num1,num2);	
}