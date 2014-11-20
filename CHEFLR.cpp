#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,t;
	long long int n;
	char s[100001];
	cin>>t;
	while(t--)
	{	
		n=1;
		cin>>s;
		for(i=0;i<strlen(s);i++)
		{	
			if((i+1)%2!=0)
			{	if(s[i]=='l')	n=2*n;
				
				else if(s[i]=='r')	n=2*n+2;
			}
			else	{
				
				if(s[i]=='l')	n=2*n-1;
				
				else if(s[i]=='r')	n=2*n+1;	}
		}
		
	long long int cnt;
	cnt=n%(1000000007);
	cout<<cnt<<"\n";
	}
	
	return 0;	}
						
