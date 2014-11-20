#include<iostream>
#include<string.h>
using namespace std;

int value[1001][100001]={0},prity[1001][100001]={0};

int main()
{
	int n,m;
	int id,attr,val,prty;
	cin>>n>>m;

	while(n--)
	{

		cin>>id>>attr>>val>>prty;

		if(value[id][attr]==0)
		{
			value[id][attr]=val;
			prity[id][attr]=prty;
		}

		else
		{
			if(prity[id][attr] <= prty)
			{
				value[id][attr]=val;
				prity[id][attr]=prty;
			}
		}
	}

	while(m--)
		{
			cin>>id>>attr;
			cout<<value[id][attr]<<endl;
		}

		return 0;

}