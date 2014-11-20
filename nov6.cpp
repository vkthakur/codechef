#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

long long int pivot(long long int arr[],long long int m,long long int n,long long int ri[],long long int ii[])
{
	long long int pivot_value=arr[m],temp,i=m,j=n+1;
	long long int r=ri[m],im=ii[m];
	
	do	{
			do {	
				i++;
				
			   }while(arr[i] < pivot_value && i <=n);
		
			do {
				j--;	
			   }while(arr[j] > pivot_value);

			 if( i < j)
			  { 
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;

				temp=ri[j];
				ri[j]=ri[i];
				ri[i]=temp;

				temp=ii[j];
				ii[j]=ii[i];
				ii[i]=temp;


			   }
			   		
		}while( i < j);
	arr[m]=arr[j];
	arr[j]=pivot_value;

	ri[m]=ri[j];
	ri[j]=r;

	ii[m]=ii[j];
	ii[j]=im;


	return j;
}

void quicksort(long long int arr_element[],long long int first_indx,long long int last_indx,long long int ri[],long long int ii[])
{
	if(first_indx < last_indx) {
			long long int pivot_pos;
			pivot_pos=pivot(arr_element,first_indx,last_indx,ri,ii);
			quicksort(arr_element,first_indx,pivot_pos-1,ri,ii);
			quicksort(arr_element,pivot_pos+1,last_indx,ri,ii);
		}
}

void create_bit_tree(long long int arr[],long long int tree[],long long int n)
{
	int r_pos,start_pos,i,j;

	for(i=1;i<=n;i++)
	{
		r_pos=log2(i & (-i));
		start_pos=i-pow(2,r_pos)+1;

		for(j=start_pos;j<=i;j++)
		{
			tree[i]=tree[i]+arr[j];
		}
	}

}

long long int read_bit_tree(long long int tree[],long long int n,long long int indx)
{
	long long int sum=0;
	while(indx >= 1)
	{
		sum=sum+tree[indx];
		indx=indx - (indx & (-indx));
	}

	return sum; 
}

void update_bit_tree(long long int tree[],long long int n,long long int indx,long long int value)
{
	
	while(indx <= n)
	{
		tree[indx]=tree[indx] + value;
		indx=indx + (indx & (-indx));

	}

}

int main()
{
	long long int l,r,q,i,n,value[100001],sum[100001],vtree[100001],stree[100001],ls[100001],rs[100001];
	long long int li[100001],ri[100001],ii[100001];

	scanf("%lld",&n);

	for(i=0;i<=100000;i++)
	{
		vtree[i]=0;
		stree[i]=0;
		value[i]=0;
		sum[i]=0;
		ls[i]=0;
		rs[i]=0;
		li[i]=0;
		ri[i]=0;
		ii[i]=0;
	}

	for(i=1;i<=n;i++)	cin>>value[i];

	create_bit_tree(value,vtree,n);

	for(i=1;i<=n;i++){

		cin>>l>>r;
		ls[i]=l;
		li[i]=l;
		ri[i]=r;
		ii[i]=i;
		rs[i]=r;
		sum[i]=read_bit_tree(vtree,n,r)-read_bit_tree(vtree,n,l-1);

	}

	quicksort(li,1,n,ri,ii);
	create_bit_tree(sum,stree,n);

	scanf("%lld",&q);

	while(q--){

		long long int x,y,qi;

		scanf("%lld",&qi);

		if(qi==1)
		{
			
			scanf("%lld%lld",&x,&y);
			long long int temp,newv;
			temp=value[x];
			value[x]=y;
			newv=temp-value[x];
			update_bit_tree(vtree,n,x,newv);

			for(i=1;i<=n;i++)
			{
				if(x>=li[i] && x<=ri[i])
				{
					long long int myindx=ii[i];
					temp=sum[myindx];
					sum[myindx]=read_bit_tree(vtree,n,rs[myindx])-read_bit_tree(vtree,n,ls[myindx]-1);
					newv=temp-sum[myindx];
					update_bit_tree(stree,n,myindx,newv);
				}
				else if(x < li[i])
				{
					break;
				}
			}


		}
		else
		{
			long long int mq,nq;

			scanf("%lld%lld",&mq,&nq);
			long long int mysum;
			mysum=read_bit_tree(stree,n,nq)-read_bit_tree(stree,n,mq-1);
			cout<<mysum<<endl;
		}


	}

	return 0;
}
