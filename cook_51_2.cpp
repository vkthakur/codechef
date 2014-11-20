#include<iostream>
using namespace std;

int abs(int nvalue)
{	
	if(nvalue < 0) return nvalue*(-1);
	
	else	return nvalue;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int i,pos,max_p=-1,min_p=100001,n,m,ans,fans;
		cin>>n>>m;
		
		for(i=1;i<=m;i++)
		{
			cin>>pos;
			
			if(pos >= max_p)	max_p=pos;

			if(pos <= min_p)	min_p=pos;

		}
		
		for(i=0;i<n;i++)
		{
			fans=abs(i-max_p);
	
			ans=abs(i-min_p);
		
			if( fans < ans )	fans=ans;
			
			cout<<fans<<" ";
		}

		cout<<"\n";
	}
	
	return 0;
}	
			
			
				
			
	
