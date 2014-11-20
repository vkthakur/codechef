#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>
#define maxvalue 1000000009
using namespace std;

int prime[100001]={0};

void calculate_prime()
{
	int i,j;
	prime[1]=1;
	for(i=2;i<=sqrt(100000);i++)
	{
		for(j=i+1;j<=100000;j++)
		{
			if(prime[j]!=1)
			{
				if(j%i==0)	prime[j]=1;
			}
		}
	}

}

int main()
{
	int q;
	cin>>q;
	calculate_prime();
	
	while(q--)
	{
		int a1,a2;
		long long int product=1;
		cin>>a1>>a2;

		for(int i=a1;i<=a2;i++)
			{
				if(prime[i]==0)
				{
					product=(product*i)%maxvalue;
				}
			}

		cout<<product<<endl;
	}

	return 0;
}