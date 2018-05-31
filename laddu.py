t=int(input())
while t>0:
	s=raw_input().split()
	n,origin=[i for i in s]
	total = 0
	for i in range(int(n)):
		a=raw_input().split()
		if len(a)>1:
			activity,sec=[i for i in a]
			if activity=='CONTEST_WON':
				total+= 300 + (20-int(sec) if int(sec)<20 else 0)
			elif activity=='BUG_FOUND':
				total+=int(sec)
		else:
			activity=a[0]
			if activity=='TOP_CONTRIBUTOR':
				total +=300
			elif activity=='CONTEST_HOSTED':
				total+=50
	print total/ (200 if origin=='INDIAN' else 400)
	t-=1