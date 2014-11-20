#include<iostream>
using namespace std;
int main()
{
	long long int l,r,i,a,b,c;

	cin>>l>>r;

	if(l%2==0 && r-l>=2)
	{
		a=l;

		b=l+1;

		c=b+1;

	
	cout<<a<<" "<<b<<" "<<c;
	}


	if(l%2==0 && r-l<2) cout<<"-1";

	if(l%2!=0 && r-l >2)
	{
		a=l+1;

		b=a+1;

		c=b+1;

		cout<<a<<" "<<b<<" "<<c;

	}

	if(l%2!=0 && r%2!=0 && r-l==2)	cout<<"-1";

	if(l%2!=0 && r-l <2) cout<<"-1";

	return 0;

}