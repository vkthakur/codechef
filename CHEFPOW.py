import sys
def main():
	n=raw_input()
	n=int(n)
	cnt=0
	ans=''
	while(n!=0):
		temp = n & 1
		n=n>>1
		if(temp==1):
			temp=pow(2,cnt)
			ans=ans+str(temp)+' '
		cnt=cnt+1
	print ans

main()
sys.exit(0)