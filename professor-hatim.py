cycle=0
def dfs(graph,n,u,visited):
	global cycle
	visited[u]=1
	# print 'visiting ',u, 'parent ',parent[u]
	for v in range(n):		
		if graph[u][v]==1:			
			if visited[v]!=1:			
				# print 'visiting ',v, 'status ',visited[v]
				parent[v]=u
				dfs(graph,n,v,visited)
			elif v!=parent[u]:
				# print 'cycle found'
				cycle=1

t=int(input())
while t>0:
	cycle=0
	inp=raw_input().split()	
	n,m=[int(i) for i in inp]
	graph=[[0 for x in range(n)] for y in range(n)]
	visited=[0 for x in range(n)]
	parent=[-1 for x in range(n)]
	for i in range(m):
		inp=raw_input().split()
		u,v=[int(j) for j in inp]
		graph[u-1][v-1]=1
		graph[v-1][u-1]=1
	# print graph
	dfs(graph,n,0,visited)
	if cycle==0:
		print 'No suspicious lizards found!'
	else:
		print 'Suspicious lizards found!'

	t-=1