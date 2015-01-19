#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%d",&i);

int  main()
{
	int t;

	input(t);

	while(t--)
	{
		int n,rray[10001],cnt,i;
		long long int sum=0;

		input(n);

		for(i=0;i<n;i++)
		{
			input(rray[i]);
			sum=sum+rray[i];
		}

		if(sum < 100)	printf("NO\n");

		else if(sum==100)	printf("YES\n");

		else
		{
			cnt=n/2;
			if(sum-100 <= cnt)	printf("YES\n");
			else	printf("NO\n");
		}

	}

	return 0;
}