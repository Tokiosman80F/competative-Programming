#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase,army,count1=0,count2=0;
	cin>>testCase;	

	while(testCase--)
	{
		cin>>army;
		if(army%2==0)
		{
			count1++;
		}
		else{
			count2++;
		}
	}
	if (count2>=count1)
	{
		cout<<"NOT READY"<<endl;
	}
	else{
		cout<<"READY FOR BATTLE"<<endl;
	}

}