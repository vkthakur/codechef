#include<iostream>
#include<stdio.h>
#include<set>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a,count=0;
		set<int>st;
		scanf("%d",&n);

		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a);
			st.insert(a);
		}

		count=st.size();
		printf("%d\n",count);
	}
	return 0;
}