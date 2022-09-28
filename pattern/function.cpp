#include<bits/stdc++.h>
using namespace std;

int power(){
	int a,b;
	cin>>a>>b;
	int ans=1;
	for (int i = 1; i <=b; ++i)
	{
		ans=ans*a;

	}
	return ans;
}

int evenOdd(){
	int a;
	cin>>a;
	if(a%2==0)  ;
	
}

int main()
{	
	int answer=power();
	cout<<"the answer is "<<answer<<endl;

	int answerEvenOdd=evenOdd()
	cout<<"Check the output its even or odd"<<answerEvenOdd<<endl;
}