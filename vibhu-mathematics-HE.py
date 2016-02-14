mod=1000000007
t=int(input())
while t>0:
	res=1
	n=int(input())
	res+=((n*(n-1))/2)
	print (res%mod)
	t-=1