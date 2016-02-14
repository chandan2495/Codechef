x=int(input())

if x<5:
	print x+1
else:
	ans=(x/5)
	if x%5!=0:
		ans+=1
	print ans
