#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
#define node pair<int,int>


int paintbox[101][101]={0};

int main(){

	int n,m,k,i,j;
	scanf("%d%d%d",&n,&m,&k);

	while(k--){

		int x,y;
		scanf("%d%d",&x,&y);
		paintbox[x][y]=1;
	}

	long long int cnt=0;
	vector <node> v;
	node s;

	for(i=1;i<=n;i++){

		int flag=0;

		for(j=1;j<=m;j++){

			
			if(paintbox[i][j]==1)
			{

				if (flag==1)
				{
					flag=0;
				}
			}
			else
			{
				if(flag==0)
				{
					flag=1;
					cnt++;
					s.first=i;
					s.second=j;
					v.push_back(s);
				}
			}

		}
	}

	printf("%lld\n",cnt);

	for(i=0;i<cnt;i++)
	{
		printf("%d %d 0\n",v[i].first,v[i].second);
	}
 
 	return 0;
 }