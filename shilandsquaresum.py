mod=1000000007
power=[0]
for i in range(1,1000001):
	power.append((i**2)%mod)
inp=raw_input()
n,k=inp.split()
n=int(n)
k=int(k)
a=[]
inp=raw_input()
b=inp.split()
a=[0]
a=a+b
res=[]
temp=[0]

for i in range(1,n-k+2):
	sum=0
	for j in range(1,k+1):
		sum+=(power[j]*int(a[i+j-1]))	
	res.append(sum%mod)
for i in res:
	print i,

