mod=1000000007
def reve(n):
	rev=0
	while n>0:
		rev=rev*10+(n%10)
		n/=10
	return rev
def cal3or9(k,n):
	if k==3:		
		ans1=0
		i=1
		while i<n:
			ans1=ans1*10+3
			i+=1
		ans=ans1*10+4
	if k==4:		
		ans1=0
		i=1
		while i<n:
			ans1=(ans1*10+1)
			i+=1
		ans=ans1*10+2
	return ans%mod
t=int(input())
while t>0:
	count=0
	inp=raw_input().split()
	n=int(inp[0])
	k=int(inp[1])
	mul=1
	temp=k*mul
	if k==3 or k==9:
		count=cal3or9(k,n)
		count=count-1
	elif k==10:
		count=0
	else:
		while n>=(len(str(temp))):
			tmp1=reve(temp)				
			if tmp1%k==0:
				# print tmp1
				count+=1
			mul+=1
			temp=k*mul
	print (count+1)%mod
	t-=1