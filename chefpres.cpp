#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;
int main()
{
int n,q,a[200][200]={0},i,j,k,king,dist[200],u,v,p,chef,pro[200];
int res,max;
scanf("%d%d",&n,&k);
scanf("%d",&king);
for(i=1;i<n;i++)
{
  scanf("%d%d",&u,&v);
  a[u][v]=1;
  a[v][u]=1;
}
for(i=1;i<=n;i++)
    dist[i]=-1;

dist[king]=0;
queue<int> qu;

qu.push(king);

while(!qu.empty())
{
    v=qu.front();
    qu.pop();
    for(i=1;i<=n;i++)
    {
        if(a[v][i]!=0&&dist[i]==-1)
        {
            dist[i]=dist[v]+1;
            qu.push(i);
        }
    }
}

//for(i=1;i<=n;i++)
  //  printf("%d %d\n",i,dist[i]);
  for(i=1;i<=n;i++)
    scanf("%d",&pro[i]);

  scanf("%d",&q);

  while(q--)
  {
      scanf("%d%d",&chef,&p);
      max=0;res=0;
      if(chef!=king&&pro[chef]==p)
      {
          res=chef;
      }
      /*else if(chef==king)
      {
        res=0;
       for(i=1;i<=n;i++)
      {
          if(pro[i]==p&&i!=king)
          {
            res=i;
            break;
          }
      }
      }*/
      else{
      for(i=1;i<=n;i++)
      {
          if(pro[i]==p&&max<dist[i])
          {
            max=dist[i];
            res=i;
          }
      }
      }
      printf("%d\n",res);
  }

return 0;
}
