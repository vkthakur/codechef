import sys

def compare(s,st,ls,slen):
	while st < ls:
		if s[st]!=s[ls]:
			return 0
		else:
			st=st+1
			ls=ls-1
	return 1

def main():
	t=input()
	while t!=0:
		s=raw_input()
		slen=len(s)
		st=0
		ls=slen-1
		focus=1
		while st<ls:
			if s[st]!=s[ls]:
				chk1=compare(s,st,ls-1,slen)
				chk2=compare(s,st+1,ls,slen)
				focus=0
				break
			st=st+1
			ls=ls-1

		if focus==1:
			print "YES"
		else:
			if chk1+chk2 >= 1:
				print"YES"
			else:
				print "NO"
		t=t-1

main()
sys.exit(0)
