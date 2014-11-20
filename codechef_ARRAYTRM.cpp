#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[200],r[200],st[200],n,k,c,fl,i;
			cin>>n>>k;

			for(i=0;i<=20;i++)	st[i]=0;

			for(i=0;i<n;i++)
			{
				cin>>a[i];
				r[i]=a[i]%(k+1);
				st[r[i]]++;
			}
			c=0;
			for(i=0;i<=k;i++)
			{
				if(st[i]!=0)	c++;
			}


			if(c > 2)	cout<<"NO"<<endl;

			else
				{
					fl=0;
					for(i=0;i<=k;i++)
					{
						if(st[i]>1 && st[i]<n-1)
						{
							cout<<"NO"<<endl;
							fl=1;
							break;
						}
					}

					if(fl==0)	cout<<"YES"<<endl;
				}
	}

	return 0;
}