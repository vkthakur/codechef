#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
	 
		float ans,temp,n,k;

		cin>>n>>k;

		ans=1/n;

		temp=ans;
		temp=temp*k;

		ans=ans+temp;

		printf("%.6f\n",ans);
	}

	return 0;
}