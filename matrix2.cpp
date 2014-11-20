#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long long int sum,n;
		scanf("%lld",&n);
		sum=pow(2,n-1);
		sum=sum%1000;
		printf("%lld\n",sum);
	}

	return 0;
}