t=int(input())

while t>0:
	n=int(input())
	if n<3:
		print n
	else:
		print ((n**3)-((n-2)**3))
	t-=1