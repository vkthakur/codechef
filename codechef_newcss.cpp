#include<iostream>
#include<string.h>
#include<map>
using namespace std;

map <int , map<int,int> > valuemap;
map <int , map<int,int> > pritymap;

int main()
{
	int n,m;
	int id,attr,val,prty;
	cin>>n>>m;

	while(n--)
	{

		cin>>id>>attr>>val>>prty;

		if(valuemap[id][attr])
		{
			
			if(pritymap[id][attr] <= prty)
			{
				valuemap[id][attr]=val;
				pritymap[id][attr]=prty;
			}
		}

		else
		{
			valuemap[id][attr]=val;
			pritymap[id][attr]=prty;
		}
	}

	while(m--)
		{
			cin>>id>>attr;
			cout<<valuemap[id][attr]<<endl;
		}

		return 0;

}