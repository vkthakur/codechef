#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	char s1[11],s2[11];

	cin>>s1;
	cin>>s2;

	int len1,len2,i,cntp1=0,cntn1=0,cntp2=0,cntn2=0,pos=0;

	len1=strlen(s1);
	len2=strlen(s2);

	for(i=0;i<len1;i++)
	{
		if(s1[i]=='+')	cntp1++;

		else	cntn1--;

		if(s2[i]=='+')	cntp2++;

		else if(s2[i]=='-')	cntn2--;

		else if(s2[i]=='?')	pos++;
	}


	if(pos==0)	
	{
		if(cntp2==cntp1 && cntn2==cntn1)	cout<<"1.000000000000";

		else	cout<<"0.000000000000";

	}
	else
	{
		long long int nume,denom;

		float result;
		
		denom=pow(2,pos);

		if(cntn2 > cntn1 || cntp2 > cntp1)
		{
			cout<<"0.000000000000";
		}

		else
		{
			long long int upnum,denum,value1,value2;
			upnum=pow(2,pos);
			value1=cntp1-cntp2;
			value2=cntn1-cntn2;

			int i;

			for(i=value1-1;i>=1;i--)
			{
				value1=value1*i;
			}

			for(i=value2-1;i>=1;i--)
			{
				value2=value2*i;
			}

			denum=value1*value2;

			nume=upnum/denum;

			result=nume/denom;

			cout<<result;

		}

	}

	return 0;

}