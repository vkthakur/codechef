#include<iostream>
using namespace std;

long long int abs(long long int n)
{
	if(n > 0)
	{
		return n;
	}
	else
	{
		n=n*(-1);
		return n;
	}
}

int main()
{

	int tc;
	cin>>tc;
	while(tc--)
	{
		long long int x1,x2,v1,v2;
		cin>>x1>>x2>>v1>>v2;

		if(x1==x2)	cout<<"("<<x1<<",0)"<<endl;

		else
		{
			if(v1 > v2)
		{
			 long long int t,d,pos;
			 d=abs(x2-x1);
			 t=d/(v1-v2);

			 if(x1 < x2)
			 {
			 	x1=x1+(v1*t);
			 	cout<<"("<<x1<<",0)"<<endl;
			 }
			 else
			 {
			 	x1=x1-(v1*t);
			 	cout<<"("<<x1<<",0)"<<endl;
			 }
			 
		}
		else
		{
			cout<<"not possible"<<endl;
		}

		}
	}

	return 0;
}