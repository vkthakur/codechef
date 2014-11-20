#include<iostream>
using namespace std;

int getans(int arr[100001],int n,int f)
{
	float x1;
	int i,j,ans=0;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] < arr[j])
			{
				x1=arr[j];
				while(x1 >= arr[i])
				{
					if(x1==arr[i])
					{
						ans++;
					}
					x1=x1/f;
				}

			}
			else if(arr[i] > arr[j])
			{
				x1=arr[i];
				while(x1 >= arr[j])
				{
					if(x1==arr[j])
					{
						ans++;
					}
					x1=x1/f;
				}

			}

			else
				ans++;

		}
	}

	return ans;
}
int main()
{
	int t;
	cin>>t;

	while(t--)
		{
			int i,j,n,f,arr[100001];
			
			cin>>n>>f;

			for(i=0;i<n;i++)
			{
				cin>>arr[i];
			}

			int myans=getans(arr,n,f);

			cout<<myans<<endl;

		}

		return 0;
}