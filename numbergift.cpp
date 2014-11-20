#include<iostream>
using namespace std;

int main()
{
	long long int cnt1,cnt2,x,y,mycnt1=0,mycnt2=0,i;

	cin>>cnt1>>cnt2>>x>>y;

	i=1;
		while(1)
	{
		
		if(cnt2 > cnt1)
		{
			if(i%y!=0 && mycnt2!=cnt2) 
			{
				mycnt2++;
				i++;
			}
			else
			{
				if(mycnt1!=cnt1)
				{
					mycnt1++;
					i++;
				}
				else	i++;
				
			}
		}
		else
		{
			
			if(i%x!=0 && mycnt1!=cnt1) 
			{
				mycnt1++;
				i++;
			}
			else
			{
				if(mycnt2!=cnt2)
				{
					mycnt2++;
					i++;
				}
				else	i++;
				
			}

		}

		if(mycnt1==cnt1 && mycnt2==cnt2)	break;

	}

	cout<<i-1;
	
	return 0;
}