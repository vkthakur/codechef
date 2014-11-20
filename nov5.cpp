#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int powr[31];
 
int nofbits(int x)
{
	int cnt=0;
	while(powr[cnt] <= x)
	{
		cnt++;
	}
 
	return cnt;
}

void cal()
{

	for(int i=0;i<=30;i++)
	{
		powr[i]=pow(2,i);
	}
}
 
 
int main()
{
	int q,flag=1;

	cin>>q;
 	cal();

	while(q--)
	{
		char cond[5];
		
		scanf("%s",cond);

 
		if(strcmp(cond,"Qi")==0)
		{
			
			if(flag==1)	flag=0;
 
			else	flag=1;
		}
 
		else
			
			{
					int x,y,len1,len2,rcount=0,bcount=0;
	
 					scanf("%d%d",&x,&y);

					while(x!=y)
					{			
 
						if(x > y)	
						{
		
							len1=nofbits(x);
 
							if((len1)%2==0)	rcount++;
							else	bcount++;
						
 
							x=x>>1;
						}
						
						else
						{
 
							len2=nofbits(y);
 
							if((len2)%2==0) rcount++;
							else bcount++;
 
							 y=y>>1;
 
						}	
 
					}
 
					len1=nofbits(x);
					if((len1)%2==0)	rcount++;
					else	bcount++;
 
 
					if(flag==1)
					{
						
						if(strcmp(cond,"Qb")==0)
						{
							cout<<bcount<<endl;
						}	
 
						if(strcmp(cond,"Qr")==0)
						{
							cout<<rcount<<endl;
						}
 
					}
 
					else
					{
						
						if(strcmp(cond,"Qb")==0)
						{
							cout<<rcount<<endl;
						}	
 
						if(strcmp(cond,"Qr")==0)
						{
							cout<<bcount<<endl;
						}
 
					}
 
 
					
			}
		
	}	
 
	return 0;
} 