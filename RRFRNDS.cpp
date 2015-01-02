#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n,i,len,j,k;
	long long int myrel=0;
	char rel[2001][2001];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",rel[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(rel[i][j]=='1')
			{
				for(k=0;k<n;k++)
				{
					if(k!=i)
					{
						if(k!=j)
						{
							if( (rel[j][k]=='1' && rel[i][k]=='0') || (rel[j][k]=='0' && rel[i][k]=='1') )
							{
								myrel++;
							}
						}	
					}
					if(k!=j)
					{
						if(k!=i)
						{
							if( (rel[j][k]=='1' && rel[i][k]=='0') || (rel[j][k]=='0' && rel[i][k]=='1') )
							{
								myrel++;
							}
						}	
					}
				}
			}
		}
	}

	printf("%lld",myrel);

	return 0;
}
