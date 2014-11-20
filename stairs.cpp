#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;


	if(m > n)	cout<<"-1";

	if(n >= m)
	{
		
			int cnt=0,flag=0;

		if(n%2==0)	cnt=n/2;

		else	
			{
				cnt=(n-1)/2;
				flag=1;
			}

		int steps;

		steps=cnt+flag;

		if(steps%m==0)	cout<<steps;

		else
		{
			int req;
			if(steps < m)
			{
				req=m-steps;
				cout<<steps+req;
			}

			else
			{
				req= steps%m;
				cout<<steps+(m-req);
			}

			

		}
	

		
	}

	return 0;

}