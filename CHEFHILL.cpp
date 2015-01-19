#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n,q,height[100001],i;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%d",&height[i]);
	}

	scanf("%d",&q);

	while(q--)
	{
		int flag=0,a,b,height_value;
		scanf("%d%d",&a,&b);
		height_value=height[a];
		for(i=a+1;i<b;i++)
		{
			if(height[i] > height_value)
			{
				flag=1;
				break;
			}
		}

		if(flag==0)	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}