#include<iostream>
#include<stdio.h>
using namespace std;
#define mod 10000007
long long int sum[50]={0};

int main()
{
	int n,m,i,j;
	long long int res=1,matrix[50][50];
	scanf("%d%d",&n,&m);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%lld",&matrix[i][j]);
			sum[j]=sum[j]+matrix[i][j];
		}
	}

	for(i=1;i<=m;i++)
	{

		res=(res*sum[i])%mod;
	}

	if(res<0) printf("%lld\n",res+mod);
	else
		{
			printf("%lld\n",res);
		}
	return 0;
}