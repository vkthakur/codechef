import sys

def main():
	t=input()
	while(t!=0):
		ar=raw_input().split()
		a=int(ar[0])
		b=ar[1]
		c=int(ar[2])
		if(b=='+'):
			print a+c
		else:
			print a-c
		t=t-1

main()
sys.exit(0)
