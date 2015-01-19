#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int n,c,i;
long long int pos[100001];

int check(int x)
{
	int placed=1;
	int lastpos=pos[0];

	for(int i=1;i<n;i++)
	{
		if(pos[i]-lastpos >= x)
		{
			placed++;

			if(placed==c)	return 1;

			lastpos=pos[i];
		}
	}

	return 0;
}


int binary_search()
{
	int start=0,end=pos[n-1];

	while(start < end)
	{
		int mid=(start + end)/2;

		int done;
		done=check(mid);
		

		if(done==1)
		{
			start=mid+1;
			
		}
		else
		{
			end=mid;
		}

	}

	return start-1;
}

int main()
{
	
	int t;
	scanf("%d",&t);
	while(t--){

	scanf("%d%d",&n,&c);

	for(i=0;i<n;i++)
	{
		scanf("%lld",&pos[i]);
	}


	sort(pos,pos+n);

	long long int res;

	res=binary_search();

	printf("%lld\n",res);


	}
	
	return 0;
}