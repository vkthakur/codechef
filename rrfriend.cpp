
#include<iostream>
#include<stdio.h>
#include<bitset>
using namespace std;
bitset<2001>frnd[2001];
char rel[2001];

int main()
{
	int n,i,j,mycount=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",rel);

		for(j=0;j<n;j++)
		{
			if(rel[j]=='1')	frnd[i].set(j);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(frnd[i].test(j)==0 && (frnd[i]&frnd[j]).any())
			{
				//cout<<"i:"<<i<<":"<<"j:"<<j<<endl;
				mycount=mycount+2;
			}
		}
	}

	printf("%d\n",mycount);
	
	return 0;
}

