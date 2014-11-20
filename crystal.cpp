#include<iostream>
using namespace std;
int main()
{	
	int n,i,str,arr[102][102],midd,j;
	cin>>n;

	midd=int(n/2)+1;
	cout<<midd<<"\n";
	for(i=1;i<=midd;i++)
	{
		
		if(i!=midd){
		str=midd-i;
		for(j=1;j<=n;j++)
		{
			if(str >= j || n-j < str)
			{
				arr[i][j]=0;
				cout<<"*";
			}
			else	
			{
				arr[i][j]=1;	
				cout<<"D";
			}
		}
		}else {
		
		for(j=1;j<=n;j++)	
		{	
			arr[i][j]=1;
			cout<<"D";
		}
		
	   }
		cout<<"\n";
	}

	for(i=midd-1;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(arr[i][j]==1)	cout<<"D";
			else	cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}

