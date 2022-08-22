#include<bits/stdc++.h>
using namespace std;
int main()
{
	float input,num,output;
	cin>>input;
	while(input--)
	{
		cin>>num;
		num=(num*60)-5;
		cout<<ceil(num/30)<<endl;
	}
}