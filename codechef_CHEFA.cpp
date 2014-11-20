#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--){

		int i,n,arr[100001];
		long long int sum=0;

		cin>>n;

		for(i=0;i<n;i++)	cin>>arr[i];

		sort(arr,arr+n);

		for(i=n-1;i>=0;i=i-2)
		{
			sum=sum+arr[i];
		}

		cout<<sum<<endl;
	}

	return 0;
}