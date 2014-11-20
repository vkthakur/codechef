import sys

def func(n):
	
	cnt=0;
	while(n!=0):
		n=n>>1
		cnt=cnt+1
	return cnt


def main():
	
	t=input()
	while(t!=0):
		n=raw_input()
		n=int(n)
		cnt=0
		while(n!=1):

			if(n&(n-1)==0):
				n=n/2
				cnt=cnt+1
			
			else:
				set=func(n)
				num=pow(2,set-1)
				n=n-num
				cnt=cnt+1

		if(cnt%2==0):	print "Richard"
		else:	print "Louise"
		t=t-1

main()
sys.exit(0)