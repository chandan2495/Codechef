def abs(a):
	return a if a>0 else -a

t=int(input())
KK = [0 for i in range(11)]
j=2
for i in range(4,11):
	if i%2!=0:
		j+=1
	KK[i] = j
while t>0:
	s= input().split()
	if not s.strip():
		s= input().split()
		chess, n,m = [i for i in s]
		n=int(n)
		m=int(m)
		if chess == 'r':
			print(n)
		elif chess == 'k':
			if n>m:
				ans = ((m*m)/2)
				ans += 1 if (m*m)%2 !=0 else 0
				add = m/2
				if m%2!=0:
					extra=1
				else:
					extra=0			
			else:  
				ans = (n*n)/2
				ans += 1 if (n*n)%2 !=0 else 0
				add = n/2
				if n%2!=0:
					extra=1
				else:
					extra=0
			for i in range(1,abs(n-m)+1):
				ans+=add
				if i%2==0:
					ans+=extra
			print(ans)
		elif chess == 'Q':
			print((n if n<m else m))
		elif chess == 'K':
			print(KK[n]*KK[m])
		t-=1