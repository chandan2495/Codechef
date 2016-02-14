t=int(input())
while t>0:
	n,s=raw_input().split()
	n=int(n)
	max1,win,winlen=0,-1,10000000
	count=[0 for x in range(26)]
	for i in s:
		count[ord(i)-97]+=1
	teams=[]
	for i in range(n):
		teams.append(raw_input())
	for te in range(n):
		score=0
		for i in teams[te]:
			score+=(count[ord(i)-97])
		if score>=max1:			
			if score==max1 and winlen>len(teams[te]):				
					max1,win,winlen=score,te,len(teams[te])
			elif score!=max1:
				max1,win,winlen=score,te,len(teams[te])
	print win+1
	t-=1 





