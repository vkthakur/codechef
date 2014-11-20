#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,k,arr[1001],cnt=0;
	
	for(int i=0;i<1001;i++)	arr[i]=0;

	cin>>n>>k;
	while(k--)
	{
		char tweet[10];

		cin>>tweet;

		if(strcmp(tweet,"CLICK")==0)
		{
			int pos;
			cin>>pos;

			if(arr[pos]==0)
			{
				arr[pos]=1;
				cnt++;
			}
			else
			{
				arr[pos]=0;
				cnt--;
			}
		}

		if(strcmp(tweet,"CLOSEALL")==0)
		{
			for(int i=0;i<1001;i++)	arr[i]=0;
			cnt=0;
		}

		cout<<cnt<<endl;
	}

	return 0;
}