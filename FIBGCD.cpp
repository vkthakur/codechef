#include <iostream>
#include <stdio.h>
using namespace std;
# define mod 1000000007

long long int f[1000001];

void cal()
{
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=1000000;i++)
	{
		f[i]= (f[i-1] + f[i-2])%mod;
	}
}

long long int gcd(long long int a,long long int b)
{
	long long int temp;

	if(b==0)	return a;
	else
	{
		return gcd(b,a%b);
	}
}

int main()
{
	int t;
	
	scanf("%d",&t);
	
	cal();

	while(t--)
	{
		long long int a,b,gcd_value;
		scanf("%lld%lld",&a,&b);
		gcd_value=gcd(a,b);

		printf("%lld\n",f[gcd_value]);
	}

	return 0;
}