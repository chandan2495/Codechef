t=int(input())
while t>0:
	r,c,m,k,j = [int(i) for i in raw_input().split()]
	a=[m,k,j]
	a.sort()
	a=a[::-1]
	flag=1
	temp1 = m+j+k
	if temp1!=(r*c):
		flag=0
	else:
		for i in range(3):
			if (r==0 or c==0):
				flag=0
				break			
			if a[i]%r==0 or a[i]%c==0:
				if r!=0 and a[i]%r==0:
					temp = a[i]/r				
					if temp <=c:
						c-=temp
					else:
						flag=0
						break
				elif c!=0:
					temp = a[i]/c				
					if temp <=r:
						r-=temp
					else:
						flag=0
						break
				else:
					flag=0
					break
			else:
				flag=0
				break
	if flag==1 and (r==0 or c==0):
		print 'Yes'
	else:
		print 'No'
	t-=1