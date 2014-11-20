#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int n,m,p[10001],sum=0,i,usum=0,diffsum=0,lsum=0;
		cin>>n>>m;

		for(i=0;i<n;i++)	
		{
			cin>>p[i];
			sum=sum+p[i];
		}

		sort(p,p+n);

		for(i=0;i<m;i++)
		{
			usum=usum+p[i];
		}

		lsum=sum-usum;
		diffsum=lsum-usum;
		cout<<diffsum<<endl;

	}
}
