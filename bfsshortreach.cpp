#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector< vi > vvi;
typedef vector< ii > vii;
typedef vector< vii > vvii;

int dist[10002]={0},visited[10001]={0};
vvi adjList;
int bfs(int s){
	int u;
	queue<int> q;
	q.push(s);	
	visited[s]=1;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for (vi::iterator i = adjList[u].begin(); i != adjList[u].end(); ++i)
		{
			if(visited[*i]==0) {
				dist[*i]=dist[u]+6;
				q.push(*i);
				visited[*i]=1;
			}
		}
	}
	return 0;	
}
int main(int argc, char const *argv[])
{
	int n,m,u,v,t,s;
	scanf("%d",&t);	
	while(t--){		
		memset(dist,0,sizeof(dist));
		memset(visited,0,sizeof(visited));		
		scanf("%d%d",&n,&m);
		adjList.assign(n+1, vi());
		for (int i = 0; i < m; ++i)
		{
			scanf("%d%d",&u,&v);
			adjList[u].push_back(v);
			adjList[v].push_back(u);
		}		
		scanf("%d",&s);
		bfs(s);	
		for (int i = 1; i <= n; ++i)
		{
			if(i!=s&&dist[i]==0)
				printf("-1 ");
			else if(i!=s)
				printf("%d ", dist[i]);
		}	
		printf("\n");
	}

	return 0;
}
