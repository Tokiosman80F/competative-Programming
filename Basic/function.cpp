#include<bits/stdc++.h>
using namespace std;
int power(int num1,int num2)
{
	int ans=1;
	for(int i=1;i<=num2;i++)
	{
		ans=ans*num1;
	}
	return ans;
}

bool isEven(int a)
{
	if(a&1)
	{
		return 0;
	}
	return 1;
}

int main(){
	int a,b;
	cin>>a>>b;
	int answer=power(a,b);
	cout<<"ans "<<answer<<endl;
  	
  	
  	if(isEven(answer))
  	{
  		cout<<"the number is even";
  	}
  	else cout<<"number is odd";

}

