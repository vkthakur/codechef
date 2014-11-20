#include<iostream>
#include<string.h>
using namespace std;

int compare(char s[100001],int frt,int lst)
{
	while(frt < lst)
	{
		if(s[frt]!=s[lst])
		{
			return 0;
		}
		else
		{
			frt++;
			lst--;
		}
	}

	return 1;
}

int main()
{
	int t;
	cin>>t;

	while(t--){

		char s[100001];
		int len,i,chk1,chk2,focus=1;

		cin>>s;
		len=strlen(s);

		for(i=0;i<len/2;i++)
		{
			if(s[i]!=s[len-1-i])
			{
				chk1=compare(s,i,len-1-i-1);
				chk2=compare(s,i+1,len-1-i);
				focus=0;
				break;
			}
		}

		if(focus==1)	cout<<"YES"<<endl;
		else
		{
			if((chk1|chk2)==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}

	}

	return 0;
}
