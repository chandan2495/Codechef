fname = raw_input("Enter file name: ")
fh = open(fname)
lst = list()
for line in fh:
	line=line.rstrip()
	words=line.split()        
	for w in words:
		if (w in lst)!=True:        
			lst.append(w)            
            				
sort(lst)
print lst
