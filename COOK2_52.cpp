#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,map1[6][6],map2[6][6];
	cin>>t;

	map1[1][1]=1;
	map1[1][2]=1;
	map1[1][3]=0;
	map1[1][4]=0;
	map1[1][5]=1;
	map1[2][1]=1;
	map1[2][2]=1;
	map1[2][3]=1;
	map1[2][4]=0;
	map1[2][5]=0;
	map1[3][1]=0;
	map1[3][2]=1;
	map1[3][3]=1;
	map1[3][4]=1;
	map1[3][5]=0;
	map1[4][1]=0;
	map1[4][2]=0;
	map1[4][3]=1;
	map1[4][4]=1;
	map1[4][5]=1;
	map1[5][1]=1;
	map1[5][2]=0;
	map1[5][3]=0;
	map1[5][4]=1;
	map1[5][5]=1;

	map2[1][1]=1;
	map2[1][2]=0;
	map2[1][3]=1;
	map2[1][4]=1;
	map2[1][5]=0;
	map2[2][1]=0;
	map2[2][2]=1;
	map2[2][3]=0;
	map2[2][4]=1;
	map2[2][5]=1;
	map2[3][1]=1;
	map2[3][2]=0;
	map2[3][3]=1;
	map2[3][4]=0;
	map2[3][5]=1;
	map2[4][1]=1;
	map2[4][2]=1;
	map2[4][3]=0;
	map2[4][4]=1;
	map2[4][5]=0;
	map2[5][1]=0;
	map2[5][2]=1;
	map2[5][3]=1;
	map2[5][4]=0;
	map2[5][5]=1;
	
	

	while(t--)
	{
		char s[100001];
		int i,flag=0,len,pos,temp,arr[100001],arpos=0,cpos,str=0,same=1;
		cin>>s;
		len=strlen(s);

		pos=s[0]-64;
		for(i=1;i<len;i++)
		{
			temp=s[i]-64;
			if(temp==pos)
			{
				
				if(str==0)
				{

				int cpos;
				if(i+1 < len)
				{
					cpos=s[i+1]-64;
					if(map1[temp][cpos]==1)
					{
						arr[arpos++]=temp+4;
						arr[arpos++]=temp-1;
						pos=temp;
					}
					else if(map2[temp][cpos]==1)
					{
						arr[arpos++]=temp-1;
						arr[arpos++]=temp+4;
						pos=temp;
						
					}

				}
				
				str=1;
			}
				else
				{
					
					int w;
					w=arr[arpos-1];
					if(w < 5)
					{
						arr[arpos++]=w+5;
					}
					else if( w >= 5)
					{
						arr[arpos++]=w-5;
					}

				
				}


			}
			else
			{
				same=0;
				if(str==0)
			{
					if(map1[pos][temp]==1)
				{
					arr[arpos++]=pos-1;
					arr[arpos++]=temp-1;
					pos=temp;
				}
				else if(map2[pos][temp]==1)
				{
					arr[arpos++]=pos+4;
					arr[arpos++]=temp+4;
					pos=temp;
				}
				else
				{
					flag=1;
					break;
				}

				str=1;

			}
				else
				{
					int k;
					k=arr[arpos-1];

					if(k < 5)
					{
						if(map1[k+1][temp]==1)
						{
							arr[arpos++]=temp-1;
						}
						else
						{
							flag=1;
							break;
						}
					}
					else
					{
						if(map2[k-4][temp]==1)
						{
							arr[arpos++]=temp+4;
						}
						else
						{
							flag=1;
							break;
						}
					}
				}

				
			}
		}


		if(flag==1)
		{
			cout<<"-1";
		}
		else
		{
			
			if(same==0)
			{
				for(i=0;i<arpos;i++)
				{
					cout<<arr[i];
				}
			}
			else
			{
				int k=s[0]-64;
				for(i=0;i<len;i++)
				{
					if(i%2==0)
					{
						cout<<k-1;
					}
					else
					{
						cout<<k+4;
					}
				}

			}
			
		}

		cout<<endl;
	}

	return 0;
}