#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int k,visited[100000]={0},sumvalr[100000],ptr_sum;

void update(int value)
{
	sumvalr[ptr_sum++]=value;
	int loop=ptr_sum-1;

	for(int i=0;i<loop;i++)
	{
		sumvalr[ptr_sum++]=sumvalr[i]+sumvalr[loop];
	}
}

int main()
{
	int t;

	cin>>t;
	while(t--)
	{
		int n,sumset[33000],valr[20],set,i,j,k;

		cin>>n;
		set=pow(2,n);

		for(i=0;i<set;i++)	cin>>sumset[i];

		sort(sumset,sumset+set);
		memset(visited,0,100000);

		valr[0]=sumset[1];
		valr[1]=sumset[2];
		sumvalr[0]=valr[0];
		sumvalr[1]=valr[1];
		sumvalr[2]=valr[0]+valr[1];
		visited[0]=1;
		visited[1]=1;

		int ptr_valr=2;
		ptr_sum=3;

		for(i=3;i<set;i++)
		{
			int flag=0;
			for(j=0;j<ptr_sum;j++)
			{
				if(sumvalr[j]==sumset[i] && visited[j]==0)
				{
					flag=1;
					visited[j]=1;
					break;
				}
			}

			if(flag==0)
			{
				valr[ptr_valr++]=sumset[i];
				if(ptr_valr==n)
				{
					break;
				}
				visited[ptr_sum]=1;
				update(sumset[i]);
			}

		}

		for(i=0;i<n;i++)
		{
			cout<<valr[i]<<" ";
		}

		cout<<endl;
	}
		return 0;
}