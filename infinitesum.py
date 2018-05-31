a=[1,2,3,4,5,6]
c=8
print c
while c>0:
	b=[a[0]]
	for i in range(1,len(a)):
		b.append(b[i-1]+a[i])
	a=b
	print a
	c-=1