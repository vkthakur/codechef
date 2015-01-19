#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int p,q,r;

	while(1)
	{
		scanf("%d%d%d",&p,&q,&r);
		
		if(p==0 && q==0 && r==0)
		{
			break;
		}	
		else
		{
			if(q-p == r-q)	printf("AP %d\n",p+3*(q-p));
			else	printf("GP %d\n",r*(q/p));;
		}
	}

	return 0;
}