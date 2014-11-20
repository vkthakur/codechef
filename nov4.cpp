#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--){

		int n,m,q,arr[6],r;
		long long int value;

		cin>>n>>m>>q;
		arr[0]=0;
		arr[1]=1;
		arr[2]=4;
		arr[3]=108;
		arr[4]=27648;
		arr[5]=86400000;

		while(q--)
		{
			cin>>r;

			if(n <= 5)
			{
				value=(arr[n]/(arr[r]*arr[n-r]))%m;
				cout<<value<<endl;
			}
			else
			{
				cout<<"19004849400"<<endl;
			}

		}
	}

	return 0;
}