#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long long int n,l[2001],i,j,count;

	while(1)
	{
		count=0;
		scanf("%lld",&n);
		if(n==0)	break;

		for(i=0;i<n;i++)
		{
			scanf("%lld",&l[i]);
		}

		sort(l,l+n);

		for(i=0;i<=n-3;i++)
		{
			for(j=i+1;j<=n-2;j++)
			{
				for(int k=n-1;k>=j+1;k--)

				{
					if(l[i]+l[j] < l[k])	
					{
						count++;					
					}
					else break;
					
				}
				
			}
		}
		printf("%lld\n",count);

	}

	return 0;
}