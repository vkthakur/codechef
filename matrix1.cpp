#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long long int n,a,b,c;
		scanf("%lld",&n);
		a=1;
		b=2;
		c=0;

		if(n==a || n==b)	printf("is fibo\n");

		else
		{
			while(c < n){

			c=a+b;
			a=b;
			b=c;

		}

		if(c==n)	printf("is fibo\n");
		else	printf("not fibo\n");

		}
	}

	return 0;
}