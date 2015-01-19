#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	long long int n,cnt=0,temp;
	scanf("%lld",&n);

	while(n!=0)
	{
		temp=n & 1;
		n=n>>1;
		if(temp==1)
		{
			temp=pow(2,cnt);
			printf("%lld ",temp);
		}
		cnt++;
	}
	return 0;
}