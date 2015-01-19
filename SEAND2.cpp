#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int t;

	scanf("%d",&t);
	while(t--)
	{
		char str[100001];
		int n,temp;
		scanf("%s",str);
		scanf("%d",&n);

		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
		}

		printf("%s\n",str);
	}
	return 0;
}