
#include<iostream>
#include<math.h>
using namespace std;

int func(long long int n)
{
	int cnt=0;
	while(n!=0)
	{
		cnt++;
		n=n>>1;
		
	}
return cnt;
	
}
int main()
{
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{
		

		cin>>n;
		if(n==1)	cout<<"Richard\n";
		
		else{
			long long int cnt=0;
	
			while(n!=1)
			{	
				
				if((n&(n-1))==0)	
				{
					cnt++;
					n=n/2;
					
				}

				else
				{	
					int set;
					long long int num;
					set=func(n);
					num=pow(2,set-1);
					n=n-num;
					cnt++;

				}
			}
	
	                if(cnt%2==0)    cout<<"Richard\n";
        	        else    cout<<"Louise\n";
	
		}
		
	}
	

	return 0;
}


			
