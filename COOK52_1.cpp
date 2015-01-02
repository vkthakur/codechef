#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int max(int a,int b)
{
	if(a > b)	return a;
	else
		return b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			char a[100010];
			int i,len,maxx=0,bal=0;
			scanf("%s",a);
			len=strlen(a);
			for(i=0;i<len;i++)
			{
				if(a[i]=='(')
				{
					bal=bal+1;
				}
				
				if(a[i]==')')
				{
					bal=bal-1;
				}
				
				maxx=max(maxx,bal);
			}

		for(i=0;i<maxx;i++)
		{
			printf("(");
		}
		for(i=0;i<maxx;i++)
		{
			printf(")");
		}
		printf("\n");
	}
	return 0;

}