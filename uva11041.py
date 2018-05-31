b=[0]
i,j=0,0
while i<1000009:
	if i%2==0:
		j+=1
	b.append(b[i]+j)
	if i>1:
		b[i]+=b[i-1]	
	i+=1
while True:
	n=int(input())
	if n<3:
		break
	else:
		print b[n-3]