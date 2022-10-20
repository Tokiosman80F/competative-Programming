
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
	for (int i = 2; i <num; ++i)
	{
		if(num%i==0)
		{
			return 0;
		}
		
	}
	return 1;
};

int main(){
	
	int num;
	cin>>num;
	if (isPrime(num))
	{
		cout<<"number is  prime "<<num<<endl;
	}
	else
	cout<<"number is not prime "<<num<<endl; 
}
