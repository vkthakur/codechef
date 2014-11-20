#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int prime[500001]={0},count[500001]={0};

void calculate_prime()
{
	int i,j;
	for(i=2;i<=500000;i++)
	{
		int flag=0,root;
		root=sqrt(i);
		for(j=2;j<=root;j++)
		{
			if(i%j==0)	
			{
				flag=1;
				break;
			}
		}

		if(flag!=1)
		{
			prime[i]=1;
		}
		else	prime[i]=0;
	}

}
void tau()
{
	for(int j=1;j<500001;j++)
	{
		 int  n=j,result=1;
		for(int i=2;i<=j;i++)
		{
			int mycount=0;

			if(prime[i]==1)
			{
				while(n%i==0)
				{
					mycount++;
					n=n/i;
				}

			}
			result=result*(mycount+1);
		}

		count[j]=result;

	}

	
}
int main()
{
	int t;
	cin>>t;
	calculate_prime();
	tau();
	while(t--)
	{
		
		unsigned long long int powresult,mresult;
		int result=1,n,npos,i,j,root;
		char test[501];
		
		cin>>npos;

		result=count[npos];

		powresult=pow(npos,(result/2.0 - 1));
		mresult=(powresult)%10000;

		
			cout<<mresult<<endl;

	}

	return 0;
}