#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%lld",&i);

inline long long int finput()
{
 int done;

 register int ch = getchar_unlocked();
 done = 0;
 for(;(ch<48 || ch>57);ch = getchar_unlocked())
  ;
 for(;ch>47 && ch<58;ch = getchar_unlocked()) 
 {
   done = (done<<1) + (done<<3) + ch - 48;
 }

 return done;

}

inline void foutput(long long int n)
{
    if(n==0)
    {
        putchar('0');

    }
    else{
        if(n < 0){
            putchar('-');
            n*=-1;
        }
        char temp[64];
        long long int sze=0;
        while(n > 0){
            temp[sze++]= '0' + n%10;
            n/=10;
        }
        for(long long int i=sze-1;i>=0;i--)
        {
            putchar(temp[i]);
        }
    }
}


long long int gcd(long long int a,long long int b)
{
	long long int temp;

	if(b==0)	return a;
	else
	{
		return gcd(b,a%b);
	}
}

int  main()
{
	long long int t;

	t=finput();

	while(t--)
	{
		long long int n,q,i,l,r,frst,ans,index;
		long long int a[100001],b[100001],res[100001],back[100001];

		n=finput();
		q=finput();

		for(i=0;i<n;i++)
		{
			frst=finput();
			a[i]=frst;
			b[i]=i;
		}

		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				res[i]=a[i];
				back[n-i-1]=a[n-i-1];
			}
			else
			{
				res[i]=gcd(res[i-1],a[i]);
				back[n-i-1]=gcd(back[n-i],a[n-i-1]);
			}
		}

		while(q--)
		{
			input(l);
			l=l-1;
			input(r);
			r=r-1;

			int flag=0,set=0;
			
			if(l==0)
			{
				ans=back[r+1];
			}
			else if(r==n-1)
			{
				ans=res[l-1];
			}	
			else
			{
				ans=gcd(res[l-1],back[r+1]);
			}


			foutput(ans);
			printf("\n");
		}
	}	

	return 0;
}