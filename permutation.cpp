#include<iostream>
using namespace std;
int main()
{
	int n,k,arr[100000];

	cin>>n>>k;

	int last=k+1;

	int pos=0,first=1;

	while(last > first)
	{
		arr[pos++]=first;
		arr[pos++]=last;
		last=last-1;
		first=first+1;
		
	}

	if(last==first)	arr[pos++]=first;


	for(int i=k+2;i<=n;i++)
	{
		arr[pos++]=i;
	}

	for(int i=0;i<pos;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;



}