#include<bits/stdc++.h>
using namespace std;
int main()
{	
	// =======QUESTION 1===========
	// int a,b=1;
	// a=10;
	// if(++a)
	// cout<<b;
	// else 
	// cout<<++b;	
	// =======QUESTION 2===========
	// int a=1,b=2;
	// if(a-->0 && ++b>2)
	// 	cout<<"stage1-inside if"<<endl;
	// else
	// 	cout<<"stage2 - inside else"<<endl;
	// cout<<a<<" "<<b<<endl;
	//// a=0 b=3
	// =======QUESTION 3===========
	// int number=3;
	// cout<<(25*(++number))<<endl;
	// =======QUESTION 4===========
	// int a=1;
	// int b=a++;//a=1 b=1 then a=2
	// int c=++a;//a=3 c=3
	// cout<<b<<endl;//b=1
	// cout<<c<<endl;//c=3

	// =======QUESTION 1===========
		// for (int i = 0; i <=5; i++)
		// {
		// 	/* code */
		// 	cout<<i<<" ";//0 2 4   
		// 	i++;//1 3 5
		// }
	// =======QUESTION 2===========
		
		// ===INFINITE LOOP===
		// for (int i = 0; i <=5; i--)
		// {
		// 	 code 
		// 	cout<<i<<" "; //0
		// 	i++;//0
		// }

	// =======QUESTION 3===========

	for (int i = 1; i < 5; i++)
	{
		for (int j = i; j <=5; j++)
		{
			/* code */
			cout<<i<<" "<<j<<endl;
			/* 1 1 1 2 1 3 1 4 1 5
			   2 2 2 3 2 4 2 5
			   3 3 3 4 3 5
			   4 4 4 5
			*/
		}
	}

	// =======QUESTION 4===========
	// =======QUESTION 5===========

}