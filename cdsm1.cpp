#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){

		char s[1001],chr;
		int i,len,count[27],temp=0,ascii_value=0;
		for(i=0;i<=26;i++)	count[i]=0;
		cin>>s;
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			int k=s[i];
			count[k-96]++;

			if((count[k-96] > temp )|| (count[k-96]==temp && ascii_value > k-96))	
			{
				chr=s[i];
				temp=count[k-96];
				ascii_value=k-96;
			}
		}

		for(i=0;i<len;i++)
		{
			if(s[i]==chr)
			{
				cout<<"?";
			}
			else
			{
				cout<<s[i];
			}
		}

		cout<<endl;
	}

	return 0;
}