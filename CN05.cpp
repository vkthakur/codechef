#include <iostream>
#include <stdio.h>
using namespace std;
#define mod 1000000007

int rray[100000001];

void cal(int maxx)
{
	rray[0]=2;
	rray[1]=5;

	for(int i=2;i<=maxx;i++)
	{
		rray[i]=((2*rray[i-1])%mod + (3*rray[i-2])%mod)%mod;
	}
}

int main()
{
	int t,maxx=0,n[25],pos=0,i,flag=0;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n[pos]);

		if(flag==0)
		{
			maxx=n[pos];
			flag=1;
		}	
		else
		{
			if(maxx < n[pos])	maxx=n[pos];
		}

		pos++;
	}

	cal(maxx);

	for(i=0;i<pos;i++)
	{
		printf("%d\n",rray[n[i]]);
	}

	return 0;
}