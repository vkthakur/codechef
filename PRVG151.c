#include <stdio.h>

long long int abs_value(long long int value)
{
	if(value > 0)	return value;
	else
	{
		return (-1)*value;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
		
	while(t--)	
	{
		long long int a,b;
		scanf("%lld%lld",&a,&b);

		if(b/a==2 || a/b==2)	printf("0\n");
		else
		{
			long long int res;
			res=abs_value(b-a);
			printf("%lld\n",res+1);
		}

	}

	return 0;
	
}