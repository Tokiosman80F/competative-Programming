#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=10;
	int b=2;

	cout<<(a&1)<<endl; 
	cout<<"a&b :"<<(a&b)<<endl;
	cout<<"a|b :"<<(a|b)<<endl;
	cout<<"~A :"<<(~a)<<endl;
	cout<<"a^b :"<<(a^b)<<endl;

// right shift  && left shift
	// left shift
	cout<<"left shift"<<endl;
	cout<<(5<<1)<<"  "<<5*2<<endl;
	cout<<(5<<2)<<"  "<<5*2*2<<endl;
	cout<<(5<<3)<<"  "<<5*2*2*2<<endl;

	//right shift
	cout<<"right shift"<<endl;
	cout<<(100>>1)<<"  "<<100/2<<endl;
	cout<<(100>>2)<<"  "<<100/(2*2)<<endl;
	cout<<(100>>3)<<"  "<<100/(2*2*2)<<endl;
	cout<<(100>>4)<<"  "<<100/(2*2*2*2)<<endl;






}