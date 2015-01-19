#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

long long int primefactor(int n)
{
	long long int cnt=0;
	int flag=0;
	while(n%2==0)
	{
		if(flag==0)
		{
			cnt++;
			flag=1;
		}

		n=n/2;
	}

	for(int i=3;i<=sqrt(n);i=i+2)
	{
		flag=0;

		while(n%i==0)
		{
			if(flag==0)
			{
				cnt++;
				flag=1;
			}

			n=n/i;
		}
	}

	flag=0;

	if(n > 2)
	{
		cnt++;
	}

	return cnt;
}

int main()
{
	int t,cnt=1;
	long long int a,b,k,res=0,i,ans;
	scanf("%d",&t);

	while(t--)
	{
		res=0;
		scanf("%lld%lld%lld",&a,&b,&k);

		for(i=a;i<=b;i++)
		{
			ans=primefactor(i);
			if(ans==k)
			{
				res++;
			}
		}

		printf("Case #%d: %lld\n",cnt,res);
		cnt++;
	}

	return 0;
}