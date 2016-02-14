def count1(n,b):
	count=0
	while n>0:	
		if (n%b)%10==0:
			count+=1
		else:
			break
		n/=b
	return count

n=int(input())
inp=raw_input().split()
a=[]
pro=1
ans=[0,0]
for i in range(n):
	a.append(int(inp[i]))
	pro*=a[i]
m=int(input())

q=[]
max1=0
for i in range(m):
	q.append(int(input()))
	max1=max1>q[i]?max1:q[i]

for i in range(2,max1+1):	
	if pro<i:
		break
	if pro%i==0:
		ans.append(count1(pro,i))	
	else:
		ans.append(0)
while m>0:
	b=int(input())
	if b<=pro:
		print ans[b]
	else:
		print 0
	m-=1

