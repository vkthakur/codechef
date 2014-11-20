#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,arr[100001],i,flag,value[100001];
		long long int total=0,val;
	
		for(i=0;i<=100001;i++)
		{
			arr[i]=0;
			value[i]=0;
		}

		cin>>n;

		for(i=0;i<n;i++)
		{
			cin>>val;

			if(val < 0)
			{
				val=val*(-1);
				 flag=1;
			}
			else	flag=0;


			if(value[val]==0)
			{
				if(flag==1)
				{
					arr[val]=2;
					value[val]=1;
				}
				else if(flag==0)
				{
					value[val]=1;
					arr[val]=1;
				}
			}
			else
			{
				if (flag==1 && arr[val]==2)
				{
					value[val]++;
				}
				else if (flag==0 && arr[val]==1) value[val]++;

				else
				{
					
						total++;

						if(value[val] > 1)
						{
							value[val]--;
						}
						else if(value[val]==1)
						{
							value[val]=0;
							arr[val]=0;
						}
				}
			}

		}
	
		cout<<total<<endl;
	}

	return 0;
}