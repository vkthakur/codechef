#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		int jlow[27],jupp[27],len1,len2,i,k,slow[27],supp[27],cnt=0;
		char j[101],s[101];
		cin>>j;
		cin>>s;

		for(i=0;i<=26;i++)
		{
			jupp[i]=0;
			jlow[i]=0;
			supp[i]=0;
			slow[i]=0;
		}

		len1=strlen(j);
		len2=strlen(s);

		for(i=0;i<len1;i++)
		{
			k=j[i];
			

			if(k >=65 && k<=90)
				jupp[k-64]++;
			else
			{
				jlow[k-96]++;
			}
		}

		for(i=0;i<len2;i++)
		{
			k=s[i];
			
			if(k >=65 && k<=90)
				supp[k-64]++;
			else
			{
				slow[k-96]++;
			}
		}

		for(i=1;i<=26;i++)
		{
			if(slow[i]!=0)
			{
				if(jlow[i]!=0)
				{
					cnt=cnt+slow[i];
				}
			}

			if(supp[i]!=0)
			{
				if(jupp[i]!=0)
				{
					cnt=cnt+supp[i];
				}
			}
		}
		

		cout<<cnt<<endl;

	}
	return 0;

}
