#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

int compute_lcp(string str1,string str2)
{
	int len1,len2,i,cnt=0,pos1=0,pos2=0;

	len1=str1.size();
	len2=str2.size();

	while((pos1 < len1) && (pos2 < len2))
	{
		if(str1[pos1]==str2[pos2])
		{
			cnt++;
			pos1++;
			pos2++;
		}
		else
		{
			break;
		}
	}

	return cnt;
}

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		string str_suffix;
		int len_suffix,i,res=0;
		string suffix_arr[2000];

		cin>>str_suffix;
		len_suffix=str_suffix.size();

		for(i=0;i<len_suffix;i++)
		{
			suffix_arr[i]=str_suffix.substr(i,len_suffix);
		}

		sort(suffix_arr,suffix_arr+len_suffix);

		res=suffix_arr[0].size();

		for(i=1;i<len_suffix;i++)
		{
			int diff=compute_lcp(suffix_arr[i],suffix_arr[i-1]);
			res= res + suffix_arr[i].size() - diff;
		}

		printf("%d\n",res);

	}
	return 0;
}