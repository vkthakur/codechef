#include<iostream>
#include<stdio.h>
using namespace std;

inline int scanint()
{
	int x;
 register int c = getchar_unlocked();
 x = 0;
 for(;(c<48 || c>57);c = getchar_unlocked())
  ;
 for(;c>47 && c<58;c = getchar_unlocked()) 
 {
   x = (x<<1) + (x<<3) + c - 48;
 }

 return x;
}

int main()
{
	int x;
	x=scanint();

	printf("%d\n",x);
}