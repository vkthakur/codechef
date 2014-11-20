#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int len=0,cnt=0,i;
	char str[100];
	
	cout<<"\n Enter the string: ";
	gets(str);
	
	for(i=0;str[i]!='\0';i++)  len++;

	puts(str);

	cout<<"\n length: "<<len;

	for(i= len-1;i>=0;i--)
	{	if(str[i]!=' ')	{
			
			int pos;
			pos=str[i];
		
			pos=pos+cnt;
		
			if(pos >123)
			{
				int k=pos-123;
				pos=96+k;
			}

			str[i]=pos;
			cnt++;
		
		}
		
		else	{ cnt=0; }
	}

	cout<<"\n String After the operation is: ";
	puts(str);
	cout<<"\n";

	return 0;
} 
