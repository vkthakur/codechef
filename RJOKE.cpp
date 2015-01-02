#include<stdio.h>

int main()
{

	int n,x,i,res,t;
	scanf("%d",&t);

	while(t--)
	{
		
		res=0;
		scanf("%d",&n);

		for(i=1;i<=n;i++) {

			res=res^i;
			scanf("%d%d",&x,&x);
		}

		printf("%d\n",res);
	}
	return 0;
}