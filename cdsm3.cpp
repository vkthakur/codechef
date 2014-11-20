#include<iostream>
#include<math.h>
using namespace std;

int calculate_prime(int n){

	int i,flag=1;

	if(n==1)	return 1;

	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 1;
		}
	}

	return 0;
}
int main()
{
	int t;
	cin>>t;
	
	while(t--)
		{
			long long int area,l,b,primel,primeb,flag;
			cin>>l>>b;

			primel=calculate_prime(l);
			primeb=calculate_prime(b);

			if(primel==0)
			{
				flag=0;
				while(flag!=1)
				{
					primel=calculate_prime(l-1);
					if(primel==1)
					{
						l=l-1;
						flag=1;
					}
					else
					{
						l=l-1;
					}

				}
			}
			if(primeb==0)
			{
				flag=0;
				while(flag!=1)
				{
					primeb=calculate_prime(b-1);
					if(primeb==1)
					{
						b=b-1;
						flag=1;
					}
					else
					{
						b=b-1;
					}
				}
			}


				area=l*b;
				cout<<area<<endl;	
		}

		return 0;
}