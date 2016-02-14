
n=5
def recur(a,i):
	print i , '----', a
	if i==5:
		a=[1]
		#print a
	else:
		b=a
		c=a
		b.insert(0,i)
		c.insert(len(a),i)		
		recur(b,i+1)		
		recur(c,i+1)

a=[1]
recur(a,2)

# def dosomething( thelist ):
# 	if len(thelist)==5:
# 		print thelist
# 	else:
# 		thelist.append('hi')
# 		dosomething(thelist)    

# alist = []
# dosomething( alist )  
