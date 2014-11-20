import sys

def compute2(n,r):

	upr=1
	lwr=1
	i=n

	while i!=(n-r):
		upr=upr*i;
		i=i-1

	done=upr/2

	return done

def compute3(n,r):
	upr=1
	lwr=1
	i=n

	while i!=n-r:
		upr=upr*i;
		i=i-1

	done=upr/6

	return done




def main():
	t=input()
	while t!=0:
		nk=map(int, raw_input().split())
		n=nk[0]
		k=nk[1]
		temp=n-k
		sum1=compute2(temp,2)
		sum1=sum1*k
		
		sum2=compute2(k,2)
		sum2=sum2*(n-k)
		
		sum3=compute3(n-k,3)
		
		done=sum1 + sum2 + sum3
		t=t-1

		print done


main()
sys.exit(0)