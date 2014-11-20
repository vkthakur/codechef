#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){

		int len,i,count=0,cnt[27];
		char str[100001];

		for(i=0;i<=26;i++)	cnt[i]=0;

		cin>>str;
		len=strlen(str);

		for(i=0;i<len;i++){

			int k=str[i];

			if(cnt[k-96]==0)
			{
				count++;
				cnt[k-96]++;
			}
			else
			{
				cnt[k-96]++;
			}
		}

		cout<<count<<endl;
	}

	return 0;
}