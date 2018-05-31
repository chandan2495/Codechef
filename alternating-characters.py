t = int(input())
while t>0:
	s = raw_input()
	ans=0;na=0;nb=0
	for c in s:
		if c=='A':
			na+=1
		else:
			nb-=1
		if (na+nb) == 0:
			na = 1 if c=='A' else 0
			nb = -1 if c=='B' else 0
		else:
			if na>1:
				ans+=1
				na=1
			if nb<-1:
				ans+=1
				nb=-1		
	print ans
	t-=1