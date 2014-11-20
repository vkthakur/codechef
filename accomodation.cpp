#include<iostream>
using namespace std;
int main()
{
	int n,p[101],q[101],i,j,sum=0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>p[i]>>q[i];
		
		if(q[i]-p[i] >=2) sum++;
	}
	
	cout<<sum;
	
	return 0;
}

