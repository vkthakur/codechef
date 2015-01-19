#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;


int pivot(int arr[],int m,int n,int idx[])
{
	int pivot_value=arr[m],temp,i=m,j=n+1,val=idx[m];
	
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

				temp=idx[j];
				idx[j]=idx[i];
				idx[i]=temp;

			   }
			   		
		}while( i < j);
	arr[m]=arr[j];
	arr[j]=pivot_value;

	idx[m]=idx[j];
	idx[j]=val;
	return j;
}

void quicksort(int arr_element[],int first_indx,int last_indx,int idx[])
{
	if(first_indx < last_indx) {
			int pivot_pos;
			pivot_pos=pivot(arr_element,first_indx,last_indx,idx);
			quicksort(arr_element,first_indx,pivot_pos-1,idx);
			quicksort(arr_element,pivot_pos+1,last_indx,idx);
		}
}


int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,a[100001],b[100001],i;

		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
		}

		quicksort(a,0,n-1,b);

		for(int i = 0; i < n; i++){
			printf("%d %d\n",a[i],b[i]);
		}

		int cnt=1,xrnge=a[0],yrnge=b[0],last=b[0];

		for(i=1;i<n;i++)
		{
			if(xrnge <= a[i] && a[i] <=yrnge && a[i] <= last)
			{
				if(xrnge<=b[i] && b[i]<=yrnge)
				{
					xrnge=a[i];
					yrnge=b[i];
					last=b[i];
				}
			}
			else
			{
				cnt++;
				xrnge=a[i];
				yrnge=b[i];
				last=b[i];
			}
		}
	
		printf("%d\n",cnt);
	}
}