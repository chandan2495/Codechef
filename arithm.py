t=int(input())
while t>0:
	n,c=[int(i) for i in raw_input().split()]
	mean = c/n
	temp1=(2*c)/n
	flag=0
	if (2*c)%n!=0:
		flag=0			
	elif n==1:
		flag=1
	else:
		mean=mean/2
		for i in xrange(1,mean):
			temp = (temp1 - 2*i)
			if temp%(n-1)==0:
				flag=1
				break
	if flag==1:
		print "Yes"
	else:
		print "No"
	t-=1