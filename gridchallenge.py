t=int(input())
while t>0:
	n=int(input())
	flag=1
	m=[]
	for i in range(n):
		s = raw_input()
		temp = [c for c in s]
		temp.sort()
		m.append(temp)
	for i in range(n):
		for j in range(n-1):
			if m[j][i] > m[j+1][i]:
				flag=0
	if flag==0:
		print 'NO'
	else:
		print 'YES'
	t-=1