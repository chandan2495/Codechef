l=int(input())
while l>0:
	prev="+x";
	next="";
	curr = raw_input().split()
	i=0
	while i<l-1 and curr[i][0]=='N':			
			i+=1	
	if i<l-1:
		next = curr[i];
		prev = curr[i];	
		i+=1
	else: 
		next = prev;			
	while i<l-1:
		while i<l-1 and curr[i][0]=='N':
			i+=1
		if i==l-1:
			next = prev;
			break;		
		if prev == "+x":
			next = curr[i];
			prev = curr[i];
		elif prev == "-x":
			if curr[i][0]=='-':
				next = "+" + curr[i][1];
			else:
				next = "-" + curr[i][1];
			prev = next;
		elif prev[1]!=curr[i][1]:
			next = prev;
			prev = next; 
		elif prev == curr[i]:
			next = "-x";
			prev = "-x";
		elif prev[1]==curr[i][1] and prev[0]!=curr[i][0]:
			next = "+x";
			prev = "+x";
		i+=1
	print(next)
	l=int(input())