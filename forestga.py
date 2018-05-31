n,w,l=[int(i) for i in raw_input().split()]
h=[[0 for i in range(2)] for j in range(n)]
sum=0
for i in range(n):
	h1,r1=[int(j) for j in raw_input().split()]
	if h1>=l:
		sum+=h1
	h[i][0] = h1
	h[i][1] = r1
if sum>=w:
	print '0'
else:
	month=1
	h=sorted(h, key=lambda x: x[1])
	month = (w-h[0][0])/h[0][1]
	if (w-h[0][0])%h[0][1]!=0:
		month+=1
	low=0; high=month-1
	while low<=high:
		sum=0
		mid=(low+high)/2
		# print mid
		for i in range(n):
			temp = h[i][0] + (h[i][1]*(mid))
			if temp >=l:
				sum+=temp
		if sum<w:
			low=mid+1
			# print 'low' , low
		elif sum>w:
			high=mid-1
		else:
			low=mid
			break
	print low		


