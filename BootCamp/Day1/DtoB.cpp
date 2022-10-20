#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans=0;
	int i=0;

	while(n!=0)
	{
		int bit=(n&1);
		cout<<"bits :"<<bit<<endl;
		ans=(bit*pow(10,i))+ans;
		cout<<"answer :"<<ans<<endl;
		n=n >> 1;
		cout<<"n :"<<n<<endl;
		i++;
	}
	cout<<"ans => "<<ans<<endl;
}