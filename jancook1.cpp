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
		int n,arr[1001],i;
		long long int sum=0;

		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}

		sort(arr,arr+n);

		i=n-1;
		while(i>=0)
		{
			sum=sum+arr[i];
			i--;

			if(i>=0)
			{
				sum=sum+arr[i];
			}

			i=i-3;
		}

		printf("%lld\n",sum);
	}

	return 0;
}