#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){

	int n,m,i;
	long long int sum=0,a;
	cin>>n>>m;

	for(i=0;i<n;i++)
	{
		cin>>a;
		sum=sum+a;
	}
	sum=sum+m;

	if(sum%n==0)	cout<<"Yes \n";
	else	cout<<"No \n";

}

return 0;

}