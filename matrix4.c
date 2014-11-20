#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long long int n,l[1000001],i;
	while(1)
	{
		count=0;
		scanf("%d",&n);
		if(n==0)	break;

		for(i=0;i<n;i++)
		{
			scanf("%d",&l[i]);
		}

		sort(l,l+n);

		for(i=0;i<=n-3;i++)
		{
			for(j=i+2;j<n;j++)
			{
				if(l[i]+l[i+1] < l[j])	count++;
			}
		}

		printf("%lld\n",count);

	}

	return 0;
}