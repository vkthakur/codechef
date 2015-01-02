#include<iostream>
#include<stdio.h>
#include<queue>
#include<map>
#include<stack>
using namespace std;

vector<int>vct[100001];
map<int,map<int,int> >mp;
int visited[100001],v[100001],u[100001],dist[100001];

int bfs(int src,int dest)
{
	queue<int>q;
	int i;
	visited[src]=1;
	q.push(src);

	while(!q.empty())
	{
		int ele=q.front();
		q.pop();

		for(int v=0;v<vct[ele].size();v++)
		{
			int pos=vct[ele][v];

			if(visited[pos]==-1)
			{
				visited[pos]=1;
				dist[pos]=dist[pos]+mp[ele][pos]+dist[ele];
				q.push(pos);
			}

			if(pos==dest) return dist[pos];
		}
	}
}

int main()
{
	int n,i,q,w,ques,x,y;

	scanf("%d",&n);

	for(i=1;i<=n-1;i++)
	{
		scanf("%d%d%d",&u[i],&v[i],&w);
		mp[u[i]][v[i]]=w;
		mp[v[i]][u[i]]=w;
		vct[u[i]].push_back(v[i]);
		vct[v[i]].push_back(u[i]);
	}

	scanf("%d",&q);

	while(q--)
	{
		scanf("%d%d%d",&ques,&x,&y);

		if(ques==1)
		{
			mp[u[x]][v[x]]=y;
			mp[v[x]][u[x]]=y;
		}
		else if(ques==2)
		{
			
			for(i=1;i<=n;i++)
			{
				visited[i]=-1;
				dist[i]=0;
			}

			int dest = bfs(x,y);

			printf("%d\n",dest);
		}
	}

	return 0;
}