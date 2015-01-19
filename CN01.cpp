#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n,i,len;
	char str[1001];

	scanf("%d",&n);
	scanf("%s",str);

	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='W')
		{
			n=n*2 + 11;
		}
		else
		{
			if(n%2==0) n=n/2;
			else
			{
				n=(n/2) + 1;
			}
		}
	}

	printf("%d",n);

	return 0;
}