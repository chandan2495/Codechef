t=int(input())
mod=1000000007
while t>0:
	res=0
	inp = raw_input().split()
	n,x,m = [int(i) for i in inp]
	x-=1
	a = raw_input().split()
	a = [int(i) for i in a]	
	for i in range(x):
		res+=(res+m*a[i])
		if res>mod:
			res=res%mod
	print (res+a[x])%mod		
	t-=1