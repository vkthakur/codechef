#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int g;
		cin>>g;

		while(g--)
		{
			int n,l,q,same_cnt=0,opps_cnt=0;

			cin>>l>>n>>q;
	
			if(n%2==0)
			{
				same_cnt=n/2;
				opps_cnt=n/2;
			}
			
			else
			{
				opps_cnt=floor(n/2) + 1;
				same_cnt=floor(n/2);
			}			
		
			if(l==1)
			{
				if(q==1) cout<<same_cnt<<endl;	
				
				else	cout<<opps_cnt<<endl;
			}
				
			else
                        {
                                if(q==2) cout<<same_cnt<<endl;

                                else cout<<opps_cnt<<endl;
                        }
        	}
	}
	
	return 0;
}

		
