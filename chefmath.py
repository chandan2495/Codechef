ans=0
mod=1000000007
def numberofways(fib,x,k,curr,idx,memo,mod):
	global ans
	if ( x!=0 and curr>=k ) or x<0:
		# print 'Discarded'
		return 0
	if x==0 and curr==k:
		ans+=1
		if ans>mod:
			ans=ans%mod
		# print 'New Way'
		return 1	
	for i in xrange(idx,50):
		if fib[i]>x:
			break
		else:
			# print 'fib', fib[i], 'i', curr+1
			if x>1000000 or memo[x-fib[i]][curr+1]==-1:
				numberofways(fib,x-fib[i],k,curr+1,i,memo,mod)
			elif x<1000001 and memo[x-fib[i]][curr+1]==-1:
				memo[x-fib[i]][curr+1]=numberofways(fib,x-fib[i],k,curr+1,i,memo,mod)
			else:
				ans+=memo[x-fib[i]][curr+1]
	return 0


q=int(input())
fib=[1,2]
for i in xrange(2,50):
	fib.append(fib[i-1]+fib[i-2])
memo=[[-1 for i in xrange(11)] for j in xrange(1000001)]
while q>0:
	s1=raw_input().split()
	x,k=[int(i) for i in s1]	
	ans=0
	numberofways(fib, x, k, 0,0,memo,mod)		
	print ans%mod
	q-=1