import copy
def abs(a):
	return a if a>0 else -a

t=int(input())
while t>0:
	w,k = raw_input().split()
	k = int(k)
	a=[0 for i in range(26)]
	uniq=""
	for i in w:
		if a[ord(i)-97]==0:
			uniq+=i
		a[ord(i)-97]+=1
	res=0
	b=[]	
	for i in range(26):
		if a[i]>0:
			b.append(a[i])
	b.sort()
	# print b
	i=0;j=len(b)-1
	temp=0
	while i<j:
		if (b[j]-b[i]) <= k:
			break
		l=i;
		while l<j and (b[j]-b[l]) > k:			
			temp+=b[l]
			l+=1
		if temp < res+((b[j]-b[i])-k):
			res=temp
			i = l+1
		else:
			res+=((b[j]-b[i])-k)
			j-=1
	print res
	t-=1