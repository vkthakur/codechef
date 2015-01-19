import sys

def main():
	t=input()
	while(t!=0):
		n,k=map(int,raw_input().split())
		flag1=0
		flag2=0
		sum1=0
		if(k!=0):
			arr=map(int,raw_input().split())
		
		cnt=0
		while(cnt<k):
			temp=arr[cnt]
			sum1=sum1+temp
			if (temp==1):
				flag1=1
			if(temp==2):
				flag2=1
			cnt=cnt+1

		if(k==0):
			mysum=(n*(n+1))/2
			mysum=mysum+1
			if(mysum%2==0):	print "Mom"
			else:
				print "Chef"

		else:
			if(flag1==1):	print "Chef"

			elif(flag2==1):	print "Mom"

			else:

				mysum=(n*(n+1))/2
				mysum=mysum-sum1
				mysum=mysum+1
				if(mysum%2==0):	print "Mom"
				else:
					print "Chef"
		t=t-1	

main()
sys.exit(0)