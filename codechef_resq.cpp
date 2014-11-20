#include<iostream>
#include<math.h>
using namespace std;

int abs(int value)
{
	if(value < 0)	return value*(-1);
	
	else return value;
}
int compare(int curr_value,int new_value)
{
	if(new_value < curr_value)	return new_value;
	
	else	return curr_value;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sqrt_pos,x,y,ans=100000001;
		cin>>n;
		sqrt_pos=sqrt(n);
		for(x=1;x<=sqrt_pos;x++)
		{
			if(n%x==0)
			{
				y=n/x;
				ans=compare(ans,abs(y-x));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
