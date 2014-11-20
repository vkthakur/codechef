#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int sum,n;		
		cin>>n;
		sum= n + (n*(n+1))/2;
		cout<<sum<<"\n";
	}
	
	return 0;
}
