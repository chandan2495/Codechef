#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,ll> ii;
typedef pair<ll,int> li;
int main()
{
int n,m,u,v,w,s,i;
int sp[100010],spec[100010]={0};
ll dist[100010],INF;
vector< vector<ii> > adj;
INF=LONG_MAX;
scanf("%d%d",&n,&m);
adj.assign(n+1, vector< pair<int,ll> >());

for(i=0;i<=n;i++)
dist[i]=INF;
for(i=0;i<m;i++){
scanf("%d%d%d",&u,&v,&w);
adj[u].push_back(ii(v,w));
}

scanf("%d",&s);
for(i=0;i<s;i++)
{
 scanf("%d",&sp[i]);
 spec[sp[i]]=1;
}
for(i=0;i<s;i++){
 dist[sp[i]] = 0;
 priority_queue< li, vector<li>, greater<li> > pq;
 pq.push(ii(0, sp[i]));
  while (!pq.empty()) {
    ii front = pq.top();
    pq.pop();
    int d = front.first, u = front.second;
    if (d > dist[u]) continue;
    for (int j = 0; j < (int)adj[u].size(); j++) {
      ii v = adj[u][j];
      if(spec[v.first]==1)
        continue;
      if (dist[u] + v.second < dist[v.first]) {
        dist[v.first] = dist[u] + v.second;
        pq.push(li(dist[v.first], v.first));
        }
    }
   }
}

for(i=1;i<=n;i++)
    printf("%lld\n",dist[i]);

return 0;
}
