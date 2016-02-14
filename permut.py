import itertools

m=[[0 for x in range(6)] for x in range(6)]
a=list(itertools.permutations([1,2,3,4,5]))
for p in a:
	for j in range(1,len(p)):
		m[p[j-1]][p[j]]+=1

print m
