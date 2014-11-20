#include<iostream>
#include<string.h>
using namespace std;

int main()
{	int n,q,i,m=0,out[500001],cpos=0;
	char a[100001],b[100001],c[100001];

	cin>>n>>q;
	
	cin>>a;
	
	cin>>b;
	
	while(m<q) {
	
		int pos;
		char qry[8],value;
		
		cin>>qry;
		
		if(strcmp(qry,"set_a")==0)
		{
			
			cin>>pos>>value;
			//cout<<"\n herea";

			a[n-1-pos]=value;	
		}
		
		if(strcmp(qry,"set_b")==0)
		{
			cin>>pos>>value;
			//cout<<"\n hereb";
			b[n-1-pos]=value;	
		}

		if(strcmp(qry,"get_c")==0)
		{	
			cin>>pos;
			//cout<<"\n herec\n ";
			int flag=0;
			for(i=n-1;i>=0;i--)
			{
				//cout<<"\n i:"<<i;

				if(a[i]=='1' && b[i]=='1')
				
			   {
					if(flag==1)
					{	
						c[i]='1';
						flag=1;
					}
					else	
					{
						flag=1;
						c[i]='0';
					}
		         }
			
				if((a[i]=='1' && b[i]=='0') || (a[i]=='1' && b[i]=='0'))
				
			   {
					if(flag==1)
					{	
						c[i]='0';
						flag=0;
					}
					else	
					{
						flag=0;
						c[i]='1';
					}
		         }
				
				if(a[i]=='0' && b[i]=='0')
				
			   {
					if(flag==1)
					{	
						c[i]='1';
						flag=0;
					}
					else	
					{
						flag=0;
						c[i]='0';
					}
		         }
			}
	
				if(flag==1)
				{
					if(pos!=n)
					{
					//cout<<"\n here1";
					//cout<<c[n-1-pos];
					if(c[n-1-pos]=='1')	out[cpos++]=1;
					else out[cpos++]=0;
					}
					else	
						{

								out[cpos++]=1;
								//cout<<"\n here2";
								//cout<<"1";
						}
							
				}

				else
				{
					

					if(c[n-1-pos]=='1')	out[cpos++]=1;
					else out[cpos++]=0;
					//cout<<"\n here3";
					//cout<<c[pos];
				}
					

						}


						m=m+1;
		}
		
		
	
		for(i=0;i<cpos;i++)	cout<<out[i];
		

		return 0;
}
		

	

