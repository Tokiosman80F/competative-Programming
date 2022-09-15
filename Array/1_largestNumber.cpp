#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
	int largestNumber[]={54,12,45,10,99,88};
	int sum=0;
	int length=sizeof(largestNumber)/sizeof(largestNumber[0]);


	for (int i = 0; i < length; ++i)
	{
		if(sum<largestNumber[i])
		{
			sum=largestNumber[i];
		}
	}

	cout<<sum<<endl;

}