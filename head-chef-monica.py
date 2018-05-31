mod=10**9+7
n=input()
s1=raw_input()
wor=dict()
for i in s1:
	wor[i]= wor.get(i,0)+1
m=input()
# print wor
while m>0:
	s2=raw_input()
	ans=1
	for i in range(len(s2)):
		# print s2[i], wor[s2[i]]
		if wor.get(s2[i]],0) == 0:
			break
	if i==len(s2)-1:
		for i in s2:
			ans*=wor[i]
			wor[i]-=1	
		print ans%mod		
	else:
		print 0
	m-=1
