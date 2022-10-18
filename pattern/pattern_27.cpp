/*

*****
*   *
*   *
*   *
*****
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
		int count,i,j;
		cin>>count;
		for ( i = 1; i<=count; ++i)
		{
			/* code */
			for (j = 1;j<=count; ++j)
			{
				/* code */
				if (i==1 || i==count || j==1 ||j==count)
				{
					/* code */
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			cout<<endl;
		}
}