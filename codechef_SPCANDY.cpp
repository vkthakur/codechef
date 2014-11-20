#include<iostream>
using namespace std;
int main()
{
	long long int n,k,stud_candies,teacher_candies,t;

	cin>>t;
	while(t--){

		cin>>n>>k;

		if(k==0)
		{
			cout<<"0"<<" "<<n<<endl;
		}

		else
		{
			teacher_candies=n%k;
			stud_candies=(n-teacher_candies)/k;
			cout<<stud_candies<<" "<<teacher_candies<<endl;
		}
		
	}

	return 0;

}