#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		char s[100001];
		int len,i,k,flag=0,count=0;

		scanf("%s",s);
		len=strlen(s);

		for(i=0;i<int(len/2);i++)
		{
				if(s[i]!=s[len-1-i])
				{
					if(i==((len/2)-1) && (len-1-i)==int(len/2))
					{
						if(flag==0)	count=0;
						else
						{
							count=1;
							break;
						}
					}

					else
					{
						if(flag==0)
						{
							if(s[i]==s[len-1-i-1])
							{
								len--;
								flag=1;
							}
							
							else if(s[i+1]==s[len-1-i])
							{
								i=i+1;
								flag=1;
							}
						
							else
							{
								count=1;
								break;
							}
						}
						else
						{
							count=1;
							break;
						}
						
					}
				}		
			
		}


		if(count==0)	cout<<"YES"<<endl;
		else {

			cout<<"NO"<<endl;	
		}

	}

	return 0;
}