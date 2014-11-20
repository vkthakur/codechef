#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int nofbits(long long int x)
{
	int cnt=0;
	while(pow(2,cnt) <= x)
	{
		cnt++;
	}

	return cnt;
}

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		long long int x,k,n,setpos,sum,temp,diff;
		float kk;
		cin>>x>>k;

		if(k==1)	
		{
			kk=x;
			kk=kk/2;
			printf("%.6f\n",kk);
		}
		else
		{
			n=nofbits(k);
			setpos=pow(2,n-1);
			
			kk=x;
			while(n--)
			{
				kk=kk/2;
			}

			diff=k-setpos;

			if(diff==0)
			{
				printf("%.6f\n",kk);
			}
			else
			{
				kk=kk + (diff*(2*kk));
				printf("%.6f\n",kk);	
			}

		}
	}

	return 0;
}	