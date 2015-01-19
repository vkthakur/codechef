/*
WAS
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,m;
		float res=0;
		scanf("%d%d",&n,&m);

		if(n==1 && m==1)
		{
			res=1;
			printf("%.6f\n",res);
		}
		else if(n==1 && m!=1)
		{
			res=m;
			printf("%.6f\n",res);
		}
		else if(n!=1 && m==1)
		{	
			res=n;
			printf("%.6f\n",res);
		}
		else
		{
			res=n+m-1;
			printf("%.6f\n",res);
		}

	}
	return 0;
}