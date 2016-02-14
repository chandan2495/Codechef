#include<bits/stdc++.h>

using namespace std;
int visited[102]={0},dist[102]={0};
int snacks[101]={0},ladders[101]={0};
int bfs(){
	int next,u;
	queue<int> q;
	q.push(1);
	visited[1]=1;	
	while(!q.empty()){
		u=q.front();
		q.pop();
		if(u==100)
			break;
		for(int v=u+1;v<(u+7)&&v<101;v++){
			if(visited[v]!=1){
				visited[v]=1;								
				next=v;
				if(ladders[v]!=0){
					next=ladders[v];
				}
				if(snacks[v]!=0){
					next=snacks[v];
				}
				dist[next]=dist[u]+1;
				q.push(next);
			}
		}
	}
	return dist[u];	
}
int main(int argc, char const *argv[])
{
	int n,m,u,v,t;
	scanf("%d",&t);
	while(t--){
		memset(snacks,0,sizeof(snacks));
		memset(ladders,0,sizeof(ladders));
		memset(visited,0,sizeof(visited));
		memset(dist,0,sizeof(dist));
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d",&u,&v);
			ladders[u]=v;
		}
		scanf("%d",&m);
		for (int i = 0; i < m; ++i)
		{
			scanf("%d%d",&u,&v);
			snacks[u]=v;
		}		
		bfs();
		if(dist[100]!=0)
			printf("%d\n",dist[100]);
		else
			printf("-1\n");
	}
	return 0;
}
