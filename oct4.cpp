#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	long long int t;
	cin>>t;

	while(t--){

		long long int i,nr,ng,nb,mr=-1,mg=-1,mb=-1,maxx,m,r[101],g[101],b[101],mmaxx=-1;


		cin>>nr>>ng>>nb>>m;

		for(i=0;i<nr;i++)	
		{
				cin>>r[i];
				if(r[i] >= mr)	mr=r[i];

		}
			
		for(i=0;i<ng;i++)	

			{
					cin>>g[i];
					if(g[i] >= mg)	mg=g[i];
		}

		for(i=0;i<nb;i++)	
			{
					cin>>b[i];	
					if(b[i] >= mb)	mb=b[i];
		}

		long long int mm=1;
		while(mm <= m)
		{
			int flag=0;

			maxx=mr;
			flag=1;
			
			
			
		 if(maxx < mg)	
				
				{
					
					maxx=mg;
					flag=2;

				}
			
			
			
		if(maxx < mb)	
			
			{
				maxx=mb;
				flag=3;
			}
			

			if(flag==1){
				
					mr=(mr/2);
						
			}

			else if(flag==2){
	
					mg=(mg/2);
					
						
			}

			else if(flag==3){

					mb=(mb/2);

			}
			mm++;
		}

			
			maxx=mr;

			if(maxx < mg)	maxx=mg;
				
			if(maxx < mb)	maxx=mb;

			cout<<maxx;
			cout<<"\n";


	}

	return 0;
}