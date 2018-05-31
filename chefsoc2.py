mod=1000000007
def numberways(a,b,n,m,i,j):	
	if i<0 or i>n-1 or j>m-1:
		return 0
	if j==m-1:
		memo[i][j+1]=(1 if memo[i][j+1]==-1 else memo[i][j+1]+1);
		return memo[i][j+1]
	# print 'i ',i
	if memo[i][j+1]==-1:
		memo[i][j+1] = numberways(a,b,n,m,i+a[j+1],j+1) + numberways(a,b,n,m,i-a[j+1],j+1)
	if memo[i][j+1] > mod:
		memo[i][j+1]-=mod;
	return memo[i][j+1]

t=int(input())
while t>0:
	s1=raw_input().split()
	n,m,s=[int(i) for i in s1]
	memo=[[-1 for i in xrange(1101)] for j in xrange(1101)]
	s-=1
	s1=raw_input().split()
	a=[int(i) for i in s1]
	b=[0 for i in range(n)]
	# c=[[0 for i in range(n)] for j in range()]
	numberways(a,b,n,m,s,-1)
	# print memo
	for i in xrange(n):		
		if memo[i][m]!=-1:
			print memo[i][m]%mod,
		else:
			print 0,
	print
	t-=1