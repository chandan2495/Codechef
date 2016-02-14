from pandas import *
t=int(input())
while t>0:
	inp=raw_input().split()
	n,m,p,x=[int(z) for z in inp]
	a=[[0 for z in range(m)] for y in range(n)]
	inp=raw_input()
	a[0]=[int(z) for z in inp]	
	for i in range(n-1):
		for j in range(m):
			temp=a[i][j]^x
			temp0=a[i][(j+p)%m]^0
			temp1=a[i][(j+p)%m]^1			
			a[i+1][(j+p)%m]=0 if temp==temp0 else 1
	print DataFrame(a)
	print ''.join([str(z) for z in a[n-1]])
	t-=1
