#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector< vi > vvi;
typedef vector< ii > vii;
typedef vector< vii > vvii;

vvii adjList;
int visited[10000],dist[10000];
int dijkastra(int s){
	priority_queue< ii, vii, greater<ii> > pq;
	pq.push(ii(0,s));
	dist[s]=0;
	while(!pq.empty()){		
		int u=(pq.top()).second;
		pq.pop();
		// printf("%d\n",u);
		if(visited[u]==0){
			visited[u]=1;
			for (vii::iterator i = adjList[u].begin(); i != adjList[u].end(); ++i)
			{
				if(visited[i->first]==0){
					dist[i->first]=dist[i->first]>(dist[u]+i->second)?(dist[u]+i->second):dist[i->first];
					pq.push(ii(dist[i->first],i->first));
				}
			}			
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int n,m,u,v,t,s,r;
	scanf("%d",&t);	
	while(t--){		
		for (int i = 0; i < 4000; ++i)
		{
			dist[i]= 500000;
		}
		memset(visited,0,sizeof(visited));		
		scanf("%d%d",&n,&m);
		adjList.assign(n+1, vii());
		for (int i = 0; i < m; ++i)
		{
			scanf("%d%d%d",&u,&v,&r);
			adjList[u].push_back(ii(v,r));
			adjList[v].push_back(ii(u,r));
		}		
		scanf("%d",&s);
		dijkastra(s);
		for (int i = 1; i <= n; ++i)
		{
			if(i!=s&&dist[i]==500000)
				printf("-1 ");
			else if(i!=s)
				printf("%d ", dist[i]);
		}	
		printf("\n");
	}
	return 0;
}