#include<iostream>
using namespace std;

int arr[100001]={0};

int main()
{	
	int n,x,y,arr[100001],i,maxx=0;
	
	cin>>n;
	
	

	for(i=0;i<n;i++)
        {
		cin>>x>>y;
		arr[x]=y;
		if(maxx <= x)	maxx=x;
	}
	
	if(n==1)	cout<<"Poor Alex";	
	else
	{
		int old,ans=1,flag=0;
		for(i=1;i<=maxx;i++)
		{
			if(arr[i]!=0)
			{
				if(flag==0)
				{
					old=arr[i];
					flag=1;
				}
				else
				{	
					
					if(old > arr[i])
					{
						ans=0;
						}
				else	old=arr[i];
			}
		}	
	}

	if(ans==1)	cout<<"Poor Alex";
	else if(ans==0)	cout<<"Happy Alex";
		}
	return 0;
}
