#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,solved,passMark,testCase;
	cin>>testCase;
	while(testCase--)
	{
		cin>>num>>solved>>passMark;
		if(solved*3-(num-solved)>=passMark)
		{
			cout<<"PASS"<<endl;

		}
		else
		{
			cout<<"FAIL"<<endl;
		}
	}

}