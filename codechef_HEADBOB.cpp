#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,n;
	char length[1001];

	cin>>t;

	while(t--)
	{
		int ns_flag=0,i_flag=0,ni_flag=0,len;
		cin>>n;
		cin>>length;

		len=strlen(length);

		for(int i=0;i<len;i++)
		{
			if(length[i]=='I')	
			{
				i_flag=1;
				ns_flag=0;
			}

			if(length[i]=='Y')	
			{
				ni_flag=1;
				ns_flag=0;
			}

			if(length[i]=='N')
			{
				if(i==0)
				{
					ns_flag=1;
				}
			}
		}

		if(ns_flag==1)	cout<<"NOT SURE"<<endl;

		else
		{
			if(i_flag==1)	cout<<"INDIAN"<<endl;

			else	cout<<"NOT INDIAN"<<endl;
		}
	}

	return 0;
}