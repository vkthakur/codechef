#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long long int powerset(long long int a[],long long int n,long long int k)
{
	long long int power_set_size=pow(2,n);
	long long int counter,j,res=0;

	for(counter=0;counter<power_set_size;counter++)
	{
		long long int sum=0;
		
		for(j=0;j<n;j++)
		{
			long long int k=counter & (1<<j);
			if(k)
			{
				sum=sum^a[j];
			}
		}

		long long int temp;
		temp=sum^k;
		if(temp > res)	res=temp;

	}

	return res;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,n,k,a[1001];
		scanf("%lld%lld",&n,&k);

		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}

		long long int res=powerset(a,n,k);
		long long int temp=0^k;
		if(temp > res)  printf("%lld\n",temp);
		else printf("%lld\n",res);		
	}
	
	return 0;
}