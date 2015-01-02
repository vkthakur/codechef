/*
Verdict: Wrong  logic

*/

#include <iostream>
#include <vector>
#include <stack>
#include <stdio.h>
#include <string.h>
using namespace std;

vector<int>v[101];
int visited[101];

int dfs(int src)
{
	stack<int>st;
	st.push(src);
	int flag=0,temp;

	while(!st.empty())
	{
		int elemnt=st.top();
		st.pop();

		if(visited[elemnt]==-1)
		{
			int pos,type;

			pos=v[elemnt][0];
			type=v[elemnt][1];

			if(flag==0)
			{
				visited[elemnt]=1;
				//cout<<"1 elemnt: "<<elemnt<<":"<<visited[elemnt]<<endl;
				//temp=elemnt;
			}
			else
			{
				if(v[temp][1]==-1) 
				{
					visited[elemnt]=0;
					v[elemnt][1]=-1;
				}
				else visited[elemnt]=1;	
				//cout<<"2 elemnt: "<<elemnt<<":"<<visited[elemnt]<<endl;
			}
			

			if(visited[pos]==-1)
			{
				st.push(pos);
			}
			else
			{
				if(visited[elemnt]==0)	
				{
					/*cout<<"3 elemnt: "<<elemnt<<":"<<visited[elemnt]<<endl;
					cout<<"3 pos: "<<pos<<":"<<visited[pos]<<endl;
					return 0;*/
					
					if(visited[pos]==1 && type==1)	
					{
						//cout<<"3 elemnt: "<<elemnt<<":"<<visited[elemnt]<<endl;
						//cout<<"3 pos: "<<pos<<":"<<visited[pos]<<endl;
						//cout<<"3 type: "<<v[elemnt][1]<<endl;
						return 0;
					}		

				}
				else
				{	
					if(visited[pos]==1 && type==-1)	
					{
						//cout<<"4 elemnt: "<<elemnt<<":"<<visited[elemnt]<<endl;
						//cout<<"4 pos: "<<pos<<":"<<visited[pos]<<endl;
						//cout<<"4 type: "<<v[elemnt][1]<<endl;
						return 0;
					}
				}
			}

		}
		flag++;
		temp=elemnt;
	}
	return 1;
}

int check_paradox(int n)
{
	int i,flag;

	for(i=1;i<=n;i++)
	{
		if(visited[i]==-1)
		{
			flag=dfs(i);
			if(flag==0)	return 0;
		}
	}
	return 1;
}

int main()
{
	while(1) {

		int n,i;
		scanf("%d",&n);

		if(n==0)	break;
		else
		{
			int temp;
			temp=n;

			for(i=0;i<=100;i++)
			{
				visited[i]=-1;
			}
			int m=1;
			//cout<<"helloh";
			while(temp--) 
			{
				char value[6];
				int cmnt;
				scanf("%d %s",&cmnt,value);

				if(strlen(value)==5)
				{
					//cout<<m<<" : "<<"false"<<endl;
					v[m].push_back(cmnt);
					v[m].push_back(-1);
					//cout<<v[m][1]<<endl;

				}
				else
				{
					//cout<<m<<" : "<<"true"<<endl;
					v[m].push_back(cmnt);
					v[m].push_back(1);
					//cout<<v[m][1]<<endl;
				}
				m++;
			}

			int flag;

			flag=check_paradox(n);

			if(flag==0)	printf("PARADOX\n");
			else	printf("NOT PARADOX\n");
				
		}

	for(i=1;i<=n;i++)
	{
		v[i].clear();
	}

	}
	return 0;
}