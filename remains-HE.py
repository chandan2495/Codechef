t=int(input())
while t>0:
	inp=raw_input()
	inp=inp.split()
	x=int(inp[0])
	y=int(inp[1])
	z=int(inp[2])
	sum=0
	sum+=(x+y)	
	# print x, y,
	temp=0
	i=2
	while i<z:
		temp=abs(x-y)
		x=y
		y=temp
		# if temp==0:
		# 	sum+=(2*x)*((z-(i+1))/3)			
		# if x==1 or y==1:
		# 	tmp1=(z-(i+1)
		# 	tmp2=tmp1/3
		# 	sum+=tmp2
		# 	sum+=()
		print temp,
		sum+=temp
		i+=1
	print sum
	t-=1
