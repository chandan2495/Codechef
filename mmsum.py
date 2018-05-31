def maxx(a,b):
	return a if a>b else b

# def getMax(a,n, j, curr1, max1):		
# 	for i in range(j,n):			
# 			curr1 = maxx(curr1 + a[i], a[i])
# 			max1= maxx(curr1, max1)			
# 	return max1

t=int(input())
while t>0:
	n = int(input())
	curr1 = 0;
	max1 = -1000000010;
	a=map(lambda x: int(x), raw_input().split())
	max_so_far1 = []
	curr_so_far1 = []
	max_so_far2 = []
	curr_so_far2 = []
	for i in range(n):		
		curr1 = maxx(curr1 + a[i], a[i]);
		curr_so_far1.append(curr1)
		max1= maxx(curr1, max1);
		max_so_far1.append(max1);
	curr1 = 0;
	max1 = -1000000010;
	for i in range(n-1,-1,-1):	#backward loop		
		curr1 = maxx(curr1 + a[i], a[i]);
		curr_so_far2.append(curr1)
		max1= maxx(curr1, max1);
		max_so_far2.append(max1);
	max1 = max_so_far1[n-1]
	# print max1
	# print curr_so_far1
	# print curr_so_far2[::-1]
	curr_so_far2 = curr_so_far2[::-1]
	for i in range(n):
		if a[i]<0:			
			if i>0 and i<n-1:
				temp1 = curr_so_far1[i-1] + curr_so_far2[i+1] 
				# print 'i', i, 'a[i]', a[i], curr_so_far1[i-1], curr_so_far2[i-1]
				if temp1 > max1:
					max1=temp1; 
	print max1 
	t-=1