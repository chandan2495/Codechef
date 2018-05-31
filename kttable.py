t=int(input())
while t>0:
	n=int(input())
	a=map(lambda x: int(x),raw_input().split())
	b=map(lambda x: int(x),raw_input().split())
	prev=0;res=0
	for i in range(n):
		if (a[i]-prev) >=b[i]:
			res+=1
		prev=a[i]
	print res
	t-=1