from sets import Set
t=int(input())
while t>0:
	inp=raw_input().split()
	n,k=[int(i) for i in inp]
	distCount=[0 for i in range(n)]
	mbrands=[['' for i in range(11)] for j in range(17)]
	for i in range(n):
		inp=raw_input().split()
		p,brands=int(inp[0]),inp[1:]		
		b=dict()		
		for l in range(p):
			if b.get(brands[l],0) == 0:
				mbrands[i].append(brands[l])
				b[brands[l]]=1
				distCount[i]+=1
			else:
				b[brands[l]]+=1
	sum1,min1=0,60
	for i in range(2**n):
		temps=Set()
		count=0
		for j in range(n):
			if (i<<j)&1 == 1:
				prev=len(temps)				
				for l in mbrands[j]:
					if l not in temps:
						temps.add(l)
				if len(temps)!=prev:
					count+=1
				if len(temps)>=k:
					min1=count if count<min1 else min1
				break
		
	print min1


	# for i in range(n):
	# 	sum1,count=len(mbrands[i]),1	
	# 	temps=Set(mbrands[i])
	# 	for j in range(n):
	# 		if i!=j and sum1<k:
	# 			prev=len(temps)
	# 			for l in mbrands[j]:
	# 				if l not in temps:
	# 					temps.add(l)
	# 			if prev!=len(temps):
	# 				count+=1
	# 		elif sum1>=k:
	# 			min1=count if count<min1 else min1
	# 			break
	# print min1
	t-=1