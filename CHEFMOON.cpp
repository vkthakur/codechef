#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int graph[101][101],dist[101][101];
int n,i,j;

void floyd_warshall()
{
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			dist[i][j]=graph[i][j];
		}
	}
	int intr;
	for(intr=0;intr<=n;intr++)
	{
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
			{
				if(dist[i][intr]+dist[intr][j] < dist[i][j])
				{
					dist[i][j]=dist[i][intr]+dist[intr][j];
				}
			}
		}
	}
}

int main()
{
	int k,m;

	scanf("%d%d%d",&n,&m,&k);

	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			if(i==j)	graph[i][j]=0;
			else	graph[i][j]=999999999;
		}
	}

	while(m--)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);

		graph[a][b]=c;
		graph[b][a]=c;
	}

	floyd_warshall();
	
	int q;
	scanf("%d",&q);

	while(q--)
	{
		int u,v;
		scanf("%d%d",&u,&v);

		if(dist[u][v] <= k )	printf("YES\n");	
		else	printf("NO\n");
	
	}
	
	return 0;
}