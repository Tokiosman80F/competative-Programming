#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool isPrime=1;
	for (int i = 2; i <=n; ++i)
		{
			/* code */
			if(n%i==0)
			{
				// cout<<"prime"<<endl;
				isPrime=0;
				break;
			}
		
		}
		if (isPrime==0)
		{
			/* code */
			cout<<"not a prime "<<endl;
		}
		else{
			cout<<"prime"<<endl;
		}

}