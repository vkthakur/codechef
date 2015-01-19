#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		char str1[1001],str2[1001];
		scanf("%s",str1);
		scanf("%s",str2);

		if(strlen(str1)!=strlen(str2))
		{
			printf("-1\n");
		}
		else
		{
			int cnt=0;

			for(i=0;i<strlen(str1);i++)
			{
				if(str1[i]!=str2[i])	cnt++;
			}

			printf("%d\n",cnt);
		}
	}
	return 0;
}