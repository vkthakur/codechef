#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {

	int t;
	scanf("%d",&t);

	while(t--)	{

		int n,i;
		float mycnt[3010];
		scanf("%d",&n);

		mycnt[1]=1;
		if(n==1)	printf("%.1f\n",1/1.0);
		else
		{
			for(i=2;i<=n;i++)
			{
				mycnt[i]=mycnt[i-1]+ (1.0/i);
			}

		float res;
		res=mycnt[n]*n;
		printf("%.1f\n",res);
		}

		
	}
	return 0;
}