#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
	int d;
	char len1[100001],len2[100001],ln[67];
	cin>>d;
	gets(ln);
	for(int i=1;i<=d;i++)
	{	
		gets(len1);
		cout<<"i:"<<i<<"\n";
		cout<<len1<<"\n";
	}
	gets(len2);
	cout<<strlen(len2);
	puts(len2);
	cout<<"\n";
	return 0;
}