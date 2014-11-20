#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
using namespace std;
#define large 1000000009


int part(int a[],int l,int u,int p[])
{
int v,i,j,temp,temp1,v1;

v=a[l];
v1=p[l];
i=l;
j=u+1;
do
{
    do
        i++;
    while(a[i] < v  && i<=u);

    do
        j--;
    while(v < a[j]);

    if(i < j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        temp1=p[i];
        p[i]=p[j];
        p[j]=temp1;

    }
}while(i < j);
a[l]=a[j];
a[j]=v;

p[l]=p[j];
p[j]=v1;
return j;
}

void quick_sort(int a[],int l,int u,int p[])
{
    int j;
    if(l < u)
    {
        j=part(a,l,u,p);
        quick_sort(a,l,j-1,p);
        quick_sort(a,j+1,u,p);
    }
}

int main(){

	int t;
	//cin>>t;
	scanf("%d",&t);

	while(t--){

		//cout<<"\n t:"<<t;

		int n,m,i,postake,position[100001],paintcolor[100001];
		char ch;
		long long int diff_colored=1;

		//cin>>n>>m;
		scanf("%d%d",&n,&m);

		for(i=0;i<m;i++){
		int a;

		cin>>ch;
		scanf("%d",&a);

		position[i]=a;
		paintcolor[i]=ch-64;
		}

		if(m==1 || m==n){

			//cout<<"1\n";
			printf("1\n");
		}

		else
		{
			quick_sort(position,0,m-1,paintcolor);

		for(i=1;i<m;i++){
			
					if(paintcolor[i]!=paintcolor[i-1])
					{
						postake=position[i]-position[i-1];
						diff_colored=(diff_colored*postake)%large;
					}		
		}

		//cout<<diff_colored<<"\n";
		printf("%lld\n",diff_colored);
		}
		
	}

	return 0;
}