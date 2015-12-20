#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
#define INF 10000000
int main()
{
int n,m,u,v,w,s,sp;
int dist[100010],sp[100010],spec[100010];
vector< vector<ii> > adj;

scanf("%d%d",&n,&m);

for(i=0;i<=n;i++)
dist[i]=INF;
for(i=0;i<m;i++){
scanf("%d%d%d",&u,&v,&w);
adj[u].push(ii(v,w));
}

scanf("%d",&s);
for(i=0;i<s;i++)
{
 scanf("%d",&sp[i]);
 spec[sp[i]]=1;
}
for(i=0;i<s;i++){
 dist[sp[i]] = 0;
 priority_queue< ii, vector<ii>, greater<ii> > pq;
 pq.push(ii(0, sp));
  while (!pq.empty()) {
    ii front = pq.top(); pq.pop();
    int d = front.first, u = front.second;
    if (spec[d]==1||d > dist[u]) continue;
    for (int j = 0; j < (int)AdjList[u].size(); j++) {
      ii v = AdjList[u][j];
      if (dist[u] + v.second < dist[v.first]) {
        dist[v.first] = dist[u] + v.second;
        pq.push(ii(dist[v.first], v.first));
        }
    }
   }
}

return 0;
}
