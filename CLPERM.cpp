#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);

	while(t--)
	{
		long long int arr[100001],sum=0,temp,i,flag1=0,flag2=0,sum1=0,n,k,f,flag3=0,flag4=0;

		scanf("%lld%lld",&n,&k);

		for(i=0;i<k;i++)	
		{
			scanf("%lld",&temp);
			arr[i]=temp;
			sum1=sum1+temp;
			if(temp==1)	flag1=1;
			if(temp==2)	flag2=1;
			if(temp==3) flag3=1;
			if(temp==4) flag4=1;
		}


		if(k==0)
		{
			sum=(n*(n+1))/2;

			sum=sum+1;

			if(sum%2==0)	printf("Mom\n");
			else printf("Chef\n");
		}

		else
		{
			if(flag1==1)	printf("Chef\n");

			else if(flag2==1) printf("Mom\n");

			else if(flag4==1 && flag3==1)	printf("Mom\n");

			else 
			{
				sort(arr,arr+k);
				temp=arr[0];
				long long int mysum=arr[0],flag=0,summie;

				for(i=1;i<k;i++)
				{
					if(arr[i]-temp==1)
					{
						mysum=mysum+arr[i];
						summie=((arr[i]*(arr[i]+1))/2);	
						if(summie-mysum < arr[i])
						{
							if(arr[i]%2==0)	flag=2;
							else	flag=1;
							break;
						}
						
						temp=arr[i];
					}
					else
					{
						mysum=arr[i];
						temp=arr[i];
					}
				}

				if(flag!=0)
					{
						if(flag==1)	printf("Chef\n");
						else printf("Mom\n");
					}
				else
				{
					sum=((n*(n+1))/2);
					sum=sum-sum1;
					sum=sum+1;
					if(sum%2==0)	printf("Mom\n");
					else printf("Chef\n");
				}

				
			}

		}
	}

	return 0;
}