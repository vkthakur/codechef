#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int getmid(int s,int e)
{
	return s+(e-s)/2;
}

void updatevalueutil(int *st,int ss,int se,int i,int diff,int index)
{
	if(i < ss || i > se)	return;

	st[index]=st[index]+diff;

	if(ss!=se)
	{
		int mid=getmid(ss,se);
		updatevalueutil(st,ss,mid,i,diff,(2*index)+1);
		updatevalueutil(st,mid+1,se,i,diff,(2*index)+2);
	}
}

void updatevalue(int arr[],int *st,int n,int index,int value)
{
	if(index <0 || index > n-1)
	{
		printf("Input index\n");
		return;
	}
	int diff=value-arr[index];
	arr[index]=value;
	updatevalueutil(st,0,n-1,index,diff,0);
}

int getsumutil(int *st,int ss,int se,int qs,int qe,int index)
{
	if(qs<=ss && se<=qe)	return st[index];

	if(ss > qe || se <qs)	return 0;

	int mid=getmid(ss,se);

	return getsumutil(st,ss,mid,qs,qe,(2*index)+1) + getsumutil(st,mid+1,se,qs,qe,(2*index)+2);
}

int getsum(int *st,int n,int qs,int qe)
{
	if(qs < 0 || qe > n-1 || qs > qe){

		printf("please input correct range\n");
	}

	return getsumutil(st,0,n-1,qs,qe,0);
}

int constructstutil(int arr[],int ss,int se,int *st,int si)
{
	if(ss==se)
	{
		st[si]=arr[ss];
		return arr[ss];
	}
	else
	{
		int mid=getmid(ss,se);
		st[si]=constructstutil(arr,ss,mid,st,(2*si)+1) + constructstutil(arr,mid+1,se,st,(2*si)+2); 
	}
	return st[si];
}

int *constructst(int arr[],int n)
{
	int x=(int)(ceil(log2(n)));
	int max_size=2*(int)pow(2,x)-1;
	int *st=new int[max_size];

	constructstutil(arr,0,n-1,st,0);

	return st;
}

int main()
{
	int n,arr[1000000],q;

	scanf("%d%d",&n,&q);
	

	for(int i=0;i<n;i++)	
	{
		scanf("%d",&arr[i]);
	}

	int *st=constructst(arr,n);
	long long int sum;
	
	while(q--)
	{
		int frt,snd;
		char str[15];
		scanf("%s%d%d",str,&frt,&snd);
		sum=getsum(st,n,frt-1,snd-1);
		printf("%lld\n",sum);
	}
	return 0;
}