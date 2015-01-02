#include<iostream>
#include<algorithm>
#include<stdio.h> 
using namespace std;


int pivot(int arr[],int m,int n,int pos[])
{
	int pivot_value=arr[m],temp,i=m,j=n+1,next_pos=pos[m];
	
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

				temp=pos[j];
				pos[j]=pos[i];
				pos[i]=temp;
			   }
			   		
		}while( i < j);
	arr[m]=arr[j];
	arr[j]=pivot_value;

	pos[m]=pos[j];
	pos[j]=next_pos;

	return j;
}

void quicksort(int arr_element[],int first_indx,int last_indx,int pos[])
{
	if(first_indx < last_indx) {
			int pivot_pos;
			pivot_pos=pivot(arr_element,first_indx,last_indx,pos);
			quicksort(arr_element,first_indx,pivot_pos-1,pos);
			quicksort(arr_element,pivot_pos+1,last_indx,pos);
		}
}

int main()
{
	int n,x,y,i,cnt1=0,cnt2=0;
	int xx[100001],yy[100001],pos1[100001],pos2[100001];
	long long int sum=0;

	scanf("%d%d%d",&n,&x,&y);

	for(i=0;i<n;i++)
	{
		scanf("%d",&xx[i]);
		pos1[i]=i;
	}

	for(i=0;i<n;i++)
	{
		scanf("%d",&yy[i]);
		pos2[i]=i;
	}

	quicksort(xx,0,n-1,pos1);
	quicksort(yy,0,n-1,pos2);
	
	for(i=n-1;i>=0;i--)
	{
		if(pos1[i]!=pos2[i])
		{
			if(cnt1 < x && cnt2 <y)
			{
				
				if(cnt2+cnt1 < n-1)
				{
					sum=sum+xx[i]+yy[i];
					cnt2++;
					cnt1++;
				}
				else if(cnt1+cnt2==n-1)
				{
					if(xx[i] > yy[i])
					{
						sum=sum+xx[i];
						cnt1++;
					}
					else
					{
						sum=sum+yy[i];
						cnt2;
					}
				}

			}
			else if( cnt1 >= x && cnt2 <y && cnt2+cnt1 <n)
			{
				sum=sum+yy[i];
				cnt2++;
			}
			else if( cnt2 >= y && cnt1 <x && cnt2+cnt1 <n)
			{
				sum=sum+xx[i];
				cnt1++;
			}
		}
		else if(pos2[i]==pos1[i])
		{
			if(xx[i] < yy[i])
			{
				if(cnt2 < y && cnt2+cnt1 <n)
				{
					sum=sum+yy[i];
					cnt2++;
				}
				else if(cnt1 < x && cnt2+cnt1 <n)
				{
					sum=sum+xx[i];
					cnt1++;
				}
			}
			else 
			{
				if(cnt1 < x && cnt2+cnt1 <n)
				{
					sum=sum+xx[i];
					cnt1++;
				}
				else if(cnt2 < y && cnt2+cnt1 <n)
				{
					sum=sum+yy[i];
					cnt2++;
				}
			}
		}

		if(cnt2+cnt1==n)	break;
	}

	printf("%lld",sum);

	return 0;
}