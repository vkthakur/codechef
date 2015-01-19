#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
using namespace std;
#define input(i)	scanf("%lld",&i);

int  main()
{
	long long int t;
	input(t);

	while(t--) {

		long long int n,a_array[100001],b_array[100001],i,k;
		long long int done[100001];

		input(n);
		input(k);

		for(i=0;i<n;i++) input(a_array[i]);

		
		for(i=0;i<n;i++)
		{
			long long int tme;
			tme=k/a_array[i];
			input(b_array[i]);
			done[i]=tme*b_array[i];
		}

		sort(done,done+n);

		printf("%lld\n",done[n-1]);

	}
	
	return 0;
}