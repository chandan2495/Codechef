import sys
print '1'
print '3','1','2','2'
print '3','3','4','4'
sys.stdout.flush()
w=int(input())
if w>0:
	if w==1:
		print '2'
		print '1'
	elif w==2:
		print '2'
		print '2'
	sys.stdout.flush()
elif w<0:
	if w==-1:
		print '2'
		print '3'
	elif w==-2:
		print '2'
		print '4'
	sys.stdout.flush()
else:
	print '2'
	print '5'
	sys.stdout.flush()