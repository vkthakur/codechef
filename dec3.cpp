#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

long long int powerset(long long int a[],long long int n,long long int need,long long int b[])
{
	long long int power_set_size=pow(2,n);
	long long int counter,j,res=0;
	vector<long long int>vct;

	for(counter=0;counter<power_set_size;counter++)
	{
		long long int sum=0;
		
		for(j=0;j<n;j++)
		{
			int k=counter & (1<<j);
			if(k && b[j]!=1)
			{

					sum=sum+a[j];
					vct.push_back(j);	
			}
		}

		if(sum==need)	
		{
			res++;
			int sze=vct.size();
			for(int i=0;i<sze;i++)
			{
				b[vct[i]]=1;
			}
		}

		vct.clear();

	}

	return res;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,flag=0,count=0;
		long long int sum=0,a[22],b[22];
		scanf("%lld%lld",&n,&k);

		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=0;
			sum=sum+a[i];
			if(a[i]==0)	count++;
			if(a[i]!=0)	flag=1;	
		}

		/*
		if(flag==0)
		{
			if(n%k==0)	cout<<"yes"<<endl;
			else
			{
				cout<<"no"<<endl;
			}
		}*/

		if(n < k)	cout<<"no"<<endl;

		else
		{
	      	
	  		if(sum%k!=0)	cout<<"no"<<endl;
     
			else	
			{
			
				
				if(flag==0)	cout<<"yes"<<endl;

				else
				{
					long long int res,need;
					need=sum/k;
					res=powerset(a,n,need,b);

					if(res==k)	
					{
						cout<<"yes"<<endl;
					
					}

					else cout<<"no"<<endl;

				}

				
			
			}
		
		}

		
	}
	return 0;
}