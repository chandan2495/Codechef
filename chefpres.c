#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;
int main()
{
int n,q,a[200][200]={0},i,j,k,king,dist[200];
scanf("%d%d",&n,&k);
scanf("%d",&king);
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
  scanf("%d%d",&u,&v);
  a[u][v]=1;
  a[v][u]=1;
 }
}
for(i=1;i<=n;i++)
    dist[i]=-1;

dist[king]=0;
queue<int> q;

q.push(king);

while(!q.empty())
{
    v=q.front();
    q.pop();
    for(i=1;i<=n;i++)
    {
        if(a[v][i]!=0&&dist[i]==-1)
        {
            dist[i]=dist[v]+1;
            q.push(i);
        }
    }
}

for(i=1;i<=n;i++)
    printf("%d %d\n",i,dist[i]);

return 0;
}
