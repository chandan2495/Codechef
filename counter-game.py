import math
t=int(input())
while t>0:
	n=int(input())
	louise=1;
	while n!=1:		
		if n&(n-1) == 0:
			n = int(n/2)
		else:
			n = n - int(math.pow(2,int(math.log(n,2))))
		if n==1:
			break
		louise = 0 if louise==1 else 1
	if louise:
		print "Louise"
	else:
		print "Richard"
	t-=1